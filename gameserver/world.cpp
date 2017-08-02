#include <unistd.h>
#include <world.h>
#include <Log.h>
#include <protocol/out/cs.pb.h>

World::World():thread_(&World::Run, this) {
    running_ = false;
    RegisterCmd();
}

World::~World() {
    thread_.join();
}

void World::Run() {
    while ( running_ ) {
        MsgProcess(msgQueue_);
        MsgProcess(dbMsgQueue_);
        usleep(10000);
    }
}

void World::MsgProcess(khaki::queue<struct PACKET>& msg) {
    if ( msg.size() > 0 ) {
        std::queue<struct PACKET> tmpQueue = msg.popAll();
        while ( !tmpQueue.empty() ) {
            struct PACKET pkt = tmpQueue.front();
            DispatcherCmd(pkt);
            tmpQueue.pop();
        }
    }
}

void World::RegisterCmd() {
    ///////////GS///////////
    REGISTER_CMD_CALLBACK(cs::ProtoID::ID_C2S_Login, HandlerLogin);

    ///////////RS///////////
    REGISTER_CMD_CALLBACK(sr::ProtoID::ID_R2S_Login, HandlerRSLogin);
}

void World::DispatcherCmd(struct PACKET& msg) {
    if ( command_.find(msg.cmd) != command_.end() ) {
        command_[msg.cmd](msg);
    } else {
        log4cppDebug(khaki::logger, "error proto : %d", msg.cmd);
    }
}

bool World::HandlerLogin(struct PACKET& pkt) {
    gs::G2S_Login recv;
    if ( !recv.ParseFromString(pkt.msg) )
    {
        log4cppDebug(khaki::logger, "proto parse error : %d", pkt.cmd);
        return false;
    }

    uint64 uid = recv.uid();

    sr::S2R_Login msg;
    uint32 msgId = uint32(sr::ProtoID::ID_S2R_Login);
    msg.set_uid(uid);
    std::string msgStr = msg.SerializeAsString();
    dSession_->SendPacket(msgId, msgStr);
    log4cppDebug(khaki::logger, "HandlerLogin proto : %d %d", pkt.cmd, uid);
}

bool World::HandlerRSLogin(struct PACKET& pkt) {

    log4cppDebug(khaki::logger, "HandlerRSLogin proto : %d %d", pkt.cmd, pkt.uid);
    return true;
}