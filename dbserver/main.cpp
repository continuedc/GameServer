#include <dbServer.h>
#include <dbMaster.h>
#include <tinyxml.h>

int main(int argc, char* argv[]) {
    khaki::EventLoop loop;
	khaki::InitLog(khaki::logger, "./dbserver.log", log4cpp::Priority::DEBUG);
    std::string filename = "../../dbserver/dbserver.xml";
    TiXmlDocument config;
    if ( !config.LoadFile(filename.c_str()) ) {
        log4cppDebug(khaki::logger, "Load config xml error");
        return 0;
    }

    TiXmlElement* root = config.RootElement();  
    TiXmlElement *mysql_host = root->FirstChildElement();
    TiXmlElement *mysql_port = mysql_host->NextSiblingElement();
	TiXmlElement *mysql_dbname = mysql_port->NextSiblingElement();
	TiXmlElement *mysql_user = mysql_dbname->NextSiblingElement();
	TiXmlElement *mysql_pwd = mysql_user->NextSiblingElement();

    std::string mysqlHost = mysql_host->FirstChild()->Value();
    std::string mysqlPort = mysql_port->FirstChild()->Value();
	std::string mysqldbName = mysql_dbname->FirstChild()->Value();
	std::string mysqlUser = mysql_user->FirstChild()->Value();
	std::string mysqlPwd = mysql_pwd->FirstChild()->Value();

	DbSQL* db = new DbSQL(mysqlHost, atoi(mysqlPort.c_str()), mysqldbName, mysqlUser, mysqlPwd);
	if ( !db->ConnectionDatabase() ) {
		log4cppDebug(khaki::logger, "connect mysql error");
		return 0;
	} else {
		log4cppDebug(khaki::logger, "connect mysql success");
	}

	gdbMaster.SetDbSQL(db);
	dbServer* g_dbServer = new dbServer(&loop, "127.0.0.1", 9529, 4);
	
	gdbMaster.Start();
	g_dbServer->start();

	loop.loop();
	//////
	delete g_dbServer;
	log4cpp::Category::shutdown();
	google::protobuf::ShutdownProtobufLibrary();
    return 0;
}