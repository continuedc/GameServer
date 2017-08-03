// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sr.proto

#ifndef PROTOBUF_sr_2eproto__INCLUDED
#define PROTOBUF_sr_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "base.pb.h"
// @@protoc_insertion_point(includes)
namespace base {
class User;
class UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
}  // namespace base
namespace sr {
class R2S_Create;
class R2S_CreateDefaultTypeInternal;
extern R2S_CreateDefaultTypeInternal _R2S_Create_default_instance_;
class R2S_Login;
class R2S_LoginDefaultTypeInternal;
extern R2S_LoginDefaultTypeInternal _R2S_Login_default_instance_;
class R2S_RegisterServer;
class R2S_RegisterServerDefaultTypeInternal;
extern R2S_RegisterServerDefaultTypeInternal _R2S_RegisterServer_default_instance_;
class S2R_Create;
class S2R_CreateDefaultTypeInternal;
extern S2R_CreateDefaultTypeInternal _S2R_Create_default_instance_;
class S2R_Login;
class S2R_LoginDefaultTypeInternal;
extern S2R_LoginDefaultTypeInternal _S2R_Login_default_instance_;
class S2R_Ping;
class S2R_PingDefaultTypeInternal;
extern S2R_PingDefaultTypeInternal _S2R_Ping_default_instance_;
class S2R_RegisterServer;
class S2R_RegisterServerDefaultTypeInternal;
extern S2R_RegisterServerDefaultTypeInternal _S2R_RegisterServer_default_instance_;
}  // namespace sr

namespace sr {

namespace protobuf_sr_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_sr_2eproto

enum ProtoID {
  ID_NULL = 0,
  ID_S2R_RegisterServer = 30001,
  ID_R2S_RegisterServer = 30002,
  ID_S2R_Login = 30003,
  ID_R2S_Login = 30004,
  ID_S2R_Ping = 30005,
  ID_S2R_Create = 30007,
  ID_R2S_Create = 30008,
  ProtoID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ProtoID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ProtoID_IsValid(int value);
const ProtoID ProtoID_MIN = ID_NULL;
const ProtoID ProtoID_MAX = ID_R2S_Create;
const int ProtoID_ARRAYSIZE = ProtoID_MAX + 1;

const ::google::protobuf::EnumDescriptor* ProtoID_descriptor();
inline const ::std::string& ProtoID_Name(ProtoID value) {
  return ::google::protobuf::internal::NameOfEnum(
    ProtoID_descriptor(), value);
}
inline bool ProtoID_Parse(
    const ::std::string& name, ProtoID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ProtoID>(
    ProtoID_descriptor(), name, value);
}
// ===================================================================

class S2R_RegisterServer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.S2R_RegisterServer) */ {
 public:
  S2R_RegisterServer();
  virtual ~S2R_RegisterServer();

  S2R_RegisterServer(const S2R_RegisterServer& from);

  inline S2R_RegisterServer& operator=(const S2R_RegisterServer& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2R_RegisterServer& default_instance();

  static inline const S2R_RegisterServer* internal_default_instance() {
    return reinterpret_cast<const S2R_RegisterServer*>(
               &_S2R_RegisterServer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(S2R_RegisterServer* other);

  // implements Message ----------------------------------------------

  inline S2R_RegisterServer* New() const PROTOBUF_FINAL { return New(NULL); }

  S2R_RegisterServer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2R_RegisterServer& from);
  void MergeFrom(const S2R_RegisterServer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2R_RegisterServer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 sid = 1;
  void clear_sid();
  static const int kSidFieldNumber = 1;
  ::google::protobuf::uint32 sid() const;
  void set_sid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sr.S2R_RegisterServer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 sid_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class R2S_RegisterServer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.R2S_RegisterServer) */ {
 public:
  R2S_RegisterServer();
  virtual ~R2S_RegisterServer();

  R2S_RegisterServer(const R2S_RegisterServer& from);

  inline R2S_RegisterServer& operator=(const R2S_RegisterServer& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const R2S_RegisterServer& default_instance();

  static inline const R2S_RegisterServer* internal_default_instance() {
    return reinterpret_cast<const R2S_RegisterServer*>(
               &_R2S_RegisterServer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(R2S_RegisterServer* other);

  // implements Message ----------------------------------------------

  inline R2S_RegisterServer* New() const PROTOBUF_FINAL { return New(NULL); }

  R2S_RegisterServer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const R2S_RegisterServer& from);
  void MergeFrom(const R2S_RegisterServer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(R2S_RegisterServer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 ret = 1;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // uint32 sid = 2;
  void clear_sid();
  static const int kSidFieldNumber = 2;
  ::google::protobuf::uint32 sid() const;
  void set_sid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sr.R2S_RegisterServer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 ret_;
  ::google::protobuf::uint32 sid_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2R_Login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.S2R_Login) */ {
 public:
  S2R_Login();
  virtual ~S2R_Login();

  S2R_Login(const S2R_Login& from);

  inline S2R_Login& operator=(const S2R_Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2R_Login& default_instance();

  static inline const S2R_Login* internal_default_instance() {
    return reinterpret_cast<const S2R_Login*>(
               &_S2R_Login_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(S2R_Login* other);

  // implements Message ----------------------------------------------

  inline S2R_Login* New() const PROTOBUF_FINAL { return New(NULL); }

  S2R_Login* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2R_Login& from);
  void MergeFrom(const S2R_Login& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2R_Login* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 tokenId = 1;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint64 uid = 2;
  void clear_uid();
  static const int kUidFieldNumber = 2;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sr.S2R_Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint64 uid_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class R2S_Login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.R2S_Login) */ {
 public:
  R2S_Login();
  virtual ~R2S_Login();

  R2S_Login(const R2S_Login& from);

  inline R2S_Login& operator=(const R2S_Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const R2S_Login& default_instance();

  static inline const R2S_Login* internal_default_instance() {
    return reinterpret_cast<const R2S_Login*>(
               &_R2S_Login_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(R2S_Login* other);

  // implements Message ----------------------------------------------

  inline R2S_Login* New() const PROTOBUF_FINAL { return New(NULL); }

  R2S_Login* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const R2S_Login& from);
  void MergeFrom(const R2S_Login& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(R2S_Login* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .base.User user = 3;
  bool has_user() const;
  void clear_user();
  static const int kUserFieldNumber = 3;
  const ::base::User& user() const;
  ::base::User* mutable_user();
  ::base::User* release_user();
  void set_allocated_user(::base::User* user);

  // uint64 tokenId = 2;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 2;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint32 ret = 1;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sr.R2S_Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::base::User* user_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint32 ret_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2R_Ping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.S2R_Ping) */ {
 public:
  S2R_Ping();
  virtual ~S2R_Ping();

  S2R_Ping(const S2R_Ping& from);

  inline S2R_Ping& operator=(const S2R_Ping& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2R_Ping& default_instance();

  static inline const S2R_Ping* internal_default_instance() {
    return reinterpret_cast<const S2R_Ping*>(
               &_S2R_Ping_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(S2R_Ping* other);

  // implements Message ----------------------------------------------

  inline S2R_Ping* New() const PROTOBUF_FINAL { return New(NULL); }

  S2R_Ping* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2R_Ping& from);
  void MergeFrom(const S2R_Ping& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2R_Ping* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 now_time = 1;
  void clear_now_time();
  static const int kNowTimeFieldNumber = 1;
  ::google::protobuf::uint32 now_time() const;
  void set_now_time(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sr.S2R_Ping)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 now_time_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2R_Create : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.S2R_Create) */ {
 public:
  S2R_Create();
  virtual ~S2R_Create();

  S2R_Create(const S2R_Create& from);

  inline S2R_Create& operator=(const S2R_Create& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2R_Create& default_instance();

  static inline const S2R_Create* internal_default_instance() {
    return reinterpret_cast<const S2R_Create*>(
               &_S2R_Create_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(S2R_Create* other);

  // implements Message ----------------------------------------------

  inline S2R_Create* New() const PROTOBUF_FINAL { return New(NULL); }

  S2R_Create* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2R_Create& from);
  void MergeFrom(const S2R_Create& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(S2R_Create* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .base.User user = 2;
  bool has_user() const;
  void clear_user();
  static const int kUserFieldNumber = 2;
  const ::base::User& user() const;
  ::base::User* mutable_user();
  ::base::User* release_user();
  void set_allocated_user(::base::User* user);

  // uint64 tokenId = 1;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:sr.S2R_Create)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::base::User* user_;
  ::google::protobuf::uint64 tokenid_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class R2S_Create : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sr.R2S_Create) */ {
 public:
  R2S_Create();
  virtual ~R2S_Create();

  R2S_Create(const R2S_Create& from);

  inline R2S_Create& operator=(const R2S_Create& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const R2S_Create& default_instance();

  static inline const R2S_Create* internal_default_instance() {
    return reinterpret_cast<const R2S_Create*>(
               &_R2S_Create_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    6;

  void Swap(R2S_Create* other);

  // implements Message ----------------------------------------------

  inline R2S_Create* New() const PROTOBUF_FINAL { return New(NULL); }

  R2S_Create* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const R2S_Create& from);
  void MergeFrom(const R2S_Create& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(R2S_Create* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 tokenId = 2;
  void clear_tokenid();
  static const int kTokenIdFieldNumber = 2;
  ::google::protobuf::uint64 tokenid() const;
  void set_tokenid(::google::protobuf::uint64 value);

  // uint32 ret = 1;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sr.R2S_Create)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint32 ret_;
  mutable int _cached_size_;
  friend struct protobuf_sr_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// S2R_RegisterServer

// uint32 sid = 1;
inline void S2R_RegisterServer::clear_sid() {
  sid_ = 0u;
}
inline ::google::protobuf::uint32 S2R_RegisterServer::sid() const {
  // @@protoc_insertion_point(field_get:sr.S2R_RegisterServer.sid)
  return sid_;
}
inline void S2R_RegisterServer::set_sid(::google::protobuf::uint32 value) {
  
  sid_ = value;
  // @@protoc_insertion_point(field_set:sr.S2R_RegisterServer.sid)
}

// -------------------------------------------------------------------

// R2S_RegisterServer

// uint32 ret = 1;
inline void R2S_RegisterServer::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 R2S_RegisterServer::ret() const {
  // @@protoc_insertion_point(field_get:sr.R2S_RegisterServer.ret)
  return ret_;
}
inline void R2S_RegisterServer::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:sr.R2S_RegisterServer.ret)
}

// uint32 sid = 2;
inline void R2S_RegisterServer::clear_sid() {
  sid_ = 0u;
}
inline ::google::protobuf::uint32 R2S_RegisterServer::sid() const {
  // @@protoc_insertion_point(field_get:sr.R2S_RegisterServer.sid)
  return sid_;
}
inline void R2S_RegisterServer::set_sid(::google::protobuf::uint32 value) {
  
  sid_ = value;
  // @@protoc_insertion_point(field_set:sr.R2S_RegisterServer.sid)
}

// -------------------------------------------------------------------

// S2R_Login

// uint64 tokenId = 1;
inline void S2R_Login::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 S2R_Login::tokenid() const {
  // @@protoc_insertion_point(field_get:sr.S2R_Login.tokenId)
  return tokenid_;
}
inline void S2R_Login::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:sr.S2R_Login.tokenId)
}

// uint64 uid = 2;
inline void S2R_Login::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 S2R_Login::uid() const {
  // @@protoc_insertion_point(field_get:sr.S2R_Login.uid)
  return uid_;
}
inline void S2R_Login::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:sr.S2R_Login.uid)
}

// -------------------------------------------------------------------

// R2S_Login

// uint32 ret = 1;
inline void R2S_Login::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 R2S_Login::ret() const {
  // @@protoc_insertion_point(field_get:sr.R2S_Login.ret)
  return ret_;
}
inline void R2S_Login::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:sr.R2S_Login.ret)
}

// uint64 tokenId = 2;
inline void R2S_Login::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 R2S_Login::tokenid() const {
  // @@protoc_insertion_point(field_get:sr.R2S_Login.tokenId)
  return tokenid_;
}
inline void R2S_Login::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:sr.R2S_Login.tokenId)
}

// .base.User user = 3;
inline bool R2S_Login::has_user() const {
  return this != internal_default_instance() && user_ != NULL;
}
inline void R2S_Login::clear_user() {
  if (GetArenaNoVirtual() == NULL && user_ != NULL) delete user_;
  user_ = NULL;
}
inline const ::base::User& R2S_Login::user() const {
  // @@protoc_insertion_point(field_get:sr.R2S_Login.user)
  return user_ != NULL ? *user_
                         : *::base::User::internal_default_instance();
}
inline ::base::User* R2S_Login::mutable_user() {
  
  if (user_ == NULL) {
    user_ = new ::base::User;
  }
  // @@protoc_insertion_point(field_mutable:sr.R2S_Login.user)
  return user_;
}
inline ::base::User* R2S_Login::release_user() {
  // @@protoc_insertion_point(field_release:sr.R2S_Login.user)
  
  ::base::User* temp = user_;
  user_ = NULL;
  return temp;
}
inline void R2S_Login::set_allocated_user(::base::User* user) {
  delete user_;
  user_ = user;
  if (user) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sr.R2S_Login.user)
}

// -------------------------------------------------------------------

// S2R_Ping

// uint32 now_time = 1;
inline void S2R_Ping::clear_now_time() {
  now_time_ = 0u;
}
inline ::google::protobuf::uint32 S2R_Ping::now_time() const {
  // @@protoc_insertion_point(field_get:sr.S2R_Ping.now_time)
  return now_time_;
}
inline void S2R_Ping::set_now_time(::google::protobuf::uint32 value) {
  
  now_time_ = value;
  // @@protoc_insertion_point(field_set:sr.S2R_Ping.now_time)
}

// -------------------------------------------------------------------

// S2R_Create

// uint64 tokenId = 1;
inline void S2R_Create::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 S2R_Create::tokenid() const {
  // @@protoc_insertion_point(field_get:sr.S2R_Create.tokenId)
  return tokenid_;
}
inline void S2R_Create::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:sr.S2R_Create.tokenId)
}

// .base.User user = 2;
inline bool S2R_Create::has_user() const {
  return this != internal_default_instance() && user_ != NULL;
}
inline void S2R_Create::clear_user() {
  if (GetArenaNoVirtual() == NULL && user_ != NULL) delete user_;
  user_ = NULL;
}
inline const ::base::User& S2R_Create::user() const {
  // @@protoc_insertion_point(field_get:sr.S2R_Create.user)
  return user_ != NULL ? *user_
                         : *::base::User::internal_default_instance();
}
inline ::base::User* S2R_Create::mutable_user() {
  
  if (user_ == NULL) {
    user_ = new ::base::User;
  }
  // @@protoc_insertion_point(field_mutable:sr.S2R_Create.user)
  return user_;
}
inline ::base::User* S2R_Create::release_user() {
  // @@protoc_insertion_point(field_release:sr.S2R_Create.user)
  
  ::base::User* temp = user_;
  user_ = NULL;
  return temp;
}
inline void S2R_Create::set_allocated_user(::base::User* user) {
  delete user_;
  user_ = user;
  if (user) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sr.S2R_Create.user)
}

// -------------------------------------------------------------------

// R2S_Create

// uint32 ret = 1;
inline void R2S_Create::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 R2S_Create::ret() const {
  // @@protoc_insertion_point(field_get:sr.R2S_Create.ret)
  return ret_;
}
inline void R2S_Create::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:sr.R2S_Create.ret)
}

// uint64 tokenId = 2;
inline void R2S_Create::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 R2S_Create::tokenid() const {
  // @@protoc_insertion_point(field_get:sr.R2S_Create.tokenId)
  return tokenid_;
}
inline void R2S_Create::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:sr.R2S_Create.tokenId)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace sr

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::sr::ProtoID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::sr::ProtoID>() {
  return ::sr::ProtoID_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sr_2eproto__INCLUDED
