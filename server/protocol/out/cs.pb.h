// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cs.proto

#ifndef PROTOBUF_cs_2eproto__INCLUDED
#define PROTOBUF_cs_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)
namespace cs {
class C2S_Create;
class C2S_CreateDefaultTypeInternal;
extern C2S_CreateDefaultTypeInternal _C2S_Create_default_instance_;
class C2S_Login;
class C2S_LoginDefaultTypeInternal;
extern C2S_LoginDefaultTypeInternal _C2S_Login_default_instance_;
class C2S_Ping;
class C2S_PingDefaultTypeInternal;
extern C2S_PingDefaultTypeInternal _C2S_Ping_default_instance_;
class S2C_Create;
class S2C_CreateDefaultTypeInternal;
extern S2C_CreateDefaultTypeInternal _S2C_Create_default_instance_;
class S2C_Login;
class S2C_LoginDefaultTypeInternal;
extern S2C_LoginDefaultTypeInternal _S2C_Login_default_instance_;
class S2C_Ping;
class S2C_PingDefaultTypeInternal;
extern S2C_PingDefaultTypeInternal _S2C_Ping_default_instance_;
}  // namespace cs

namespace cs {

namespace protobuf_cs_2eproto {
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
}  // namespace protobuf_cs_2eproto

enum ProtoID {
  ID_NULL = 0,
  ID_C2S_Ping = 10001,
  ID_S2C_Ping = 10002,
  ID_C2S_Login = 10003,
  ID_S2C_Login = 10004,
  ID_C2S_Create = 10005,
  ID_S2C_Create = 10006,
  ProtoID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ProtoID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ProtoID_IsValid(int value);
const ProtoID ProtoID_MIN = ID_NULL;
const ProtoID ProtoID_MAX = ID_S2C_Create;
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

class C2S_Ping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cs.C2S_Ping) */ {
 public:
  C2S_Ping();
  virtual ~C2S_Ping();

  C2S_Ping(const C2S_Ping& from);

  inline C2S_Ping& operator=(const C2S_Ping& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const C2S_Ping& default_instance();

  static inline const C2S_Ping* internal_default_instance() {
    return reinterpret_cast<const C2S_Ping*>(
               &_C2S_Ping_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(C2S_Ping* other);

  // implements Message ----------------------------------------------

  inline C2S_Ping* New() const PROTOBUF_FINAL { return New(NULL); }

  C2S_Ping* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const C2S_Ping& from);
  void MergeFrom(const C2S_Ping& from);
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
  void InternalSwap(C2S_Ping* other);
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

  // @@protoc_insertion_point(class_scope:cs.C2S_Ping)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 now_time_;
  mutable int _cached_size_;
  friend struct protobuf_cs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2C_Ping : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cs.S2C_Ping) */ {
 public:
  S2C_Ping();
  virtual ~S2C_Ping();

  S2C_Ping(const S2C_Ping& from);

  inline S2C_Ping& operator=(const S2C_Ping& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2C_Ping& default_instance();

  static inline const S2C_Ping* internal_default_instance() {
    return reinterpret_cast<const S2C_Ping*>(
               &_S2C_Ping_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(S2C_Ping* other);

  // implements Message ----------------------------------------------

  inline S2C_Ping* New() const PROTOBUF_FINAL { return New(NULL); }

  S2C_Ping* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2C_Ping& from);
  void MergeFrom(const S2C_Ping& from);
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
  void InternalSwap(S2C_Ping* other);
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

  // @@protoc_insertion_point(class_scope:cs.S2C_Ping)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct protobuf_cs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class C2S_Login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cs.C2S_Login) */ {
 public:
  C2S_Login();
  virtual ~C2S_Login();

  C2S_Login(const C2S_Login& from);

  inline C2S_Login& operator=(const C2S_Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const C2S_Login& default_instance();

  static inline const C2S_Login* internal_default_instance() {
    return reinterpret_cast<const C2S_Login*>(
               &_C2S_Login_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(C2S_Login* other);

  // implements Message ----------------------------------------------

  inline C2S_Login* New() const PROTOBUF_FINAL { return New(NULL); }

  C2S_Login* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const C2S_Login& from);
  void MergeFrom(const C2S_Login& from);
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
  void InternalSwap(C2S_Login* other);
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

  // @@protoc_insertion_point(class_scope:cs.C2S_Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint64 uid_;
  mutable int _cached_size_;
  friend struct protobuf_cs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2C_Login : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cs.S2C_Login) */ {
 public:
  S2C_Login();
  virtual ~S2C_Login();

  S2C_Login(const S2C_Login& from);

  inline S2C_Login& operator=(const S2C_Login& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2C_Login& default_instance();

  static inline const S2C_Login* internal_default_instance() {
    return reinterpret_cast<const S2C_Login*>(
               &_S2C_Login_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(S2C_Login* other);

  // implements Message ----------------------------------------------

  inline S2C_Login* New() const PROTOBUF_FINAL { return New(NULL); }

  S2C_Login* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2C_Login& from);
  void MergeFrom(const S2C_Login& from);
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
  void InternalSwap(S2C_Login* other);
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

  // @@protoc_insertion_point(class_scope:cs.S2C_Login)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 ret_;
  mutable int _cached_size_;
  friend struct protobuf_cs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class C2S_Create : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cs.C2S_Create) */ {
 public:
  C2S_Create();
  virtual ~C2S_Create();

  C2S_Create(const C2S_Create& from);

  inline C2S_Create& operator=(const C2S_Create& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const C2S_Create& default_instance();

  static inline const C2S_Create* internal_default_instance() {
    return reinterpret_cast<const C2S_Create*>(
               &_C2S_Create_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(C2S_Create* other);

  // implements Message ----------------------------------------------

  inline C2S_Create* New() const PROTOBUF_FINAL { return New(NULL); }

  C2S_Create* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const C2S_Create& from);
  void MergeFrom(const C2S_Create& from);
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
  void InternalSwap(C2S_Create* other);
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

  // @@protoc_insertion_point(class_scope:cs.C2S_Create)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 tokenid_;
  ::google::protobuf::uint64 uid_;
  mutable int _cached_size_;
  friend struct protobuf_cs_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class S2C_Create : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cs.S2C_Create) */ {
 public:
  S2C_Create();
  virtual ~S2C_Create();

  S2C_Create(const S2C_Create& from);

  inline S2C_Create& operator=(const S2C_Create& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2C_Create& default_instance();

  static inline const S2C_Create* internal_default_instance() {
    return reinterpret_cast<const S2C_Create*>(
               &_S2C_Create_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(S2C_Create* other);

  // implements Message ----------------------------------------------

  inline S2C_Create* New() const PROTOBUF_FINAL { return New(NULL); }

  S2C_Create* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2C_Create& from);
  void MergeFrom(const S2C_Create& from);
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
  void InternalSwap(S2C_Create* other);
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

  // uint64 uid = 2;
  void clear_uid();
  static const int kUidFieldNumber = 2;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // uint32 ret = 1;
  void clear_ret();
  static const int kRetFieldNumber = 1;
  ::google::protobuf::uint32 ret() const;
  void set_ret(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:cs.S2C_Create)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 uid_;
  ::google::protobuf::uint32 ret_;
  mutable int _cached_size_;
  friend struct protobuf_cs_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// C2S_Ping

// uint32 now_time = 1;
inline void C2S_Ping::clear_now_time() {
  now_time_ = 0u;
}
inline ::google::protobuf::uint32 C2S_Ping::now_time() const {
  // @@protoc_insertion_point(field_get:cs.C2S_Ping.now_time)
  return now_time_;
}
inline void C2S_Ping::set_now_time(::google::protobuf::uint32 value) {
  
  now_time_ = value;
  // @@protoc_insertion_point(field_set:cs.C2S_Ping.now_time)
}

// -------------------------------------------------------------------

// S2C_Ping

// -------------------------------------------------------------------

// C2S_Login

// uint64 tokenId = 1;
inline void C2S_Login::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 C2S_Login::tokenid() const {
  // @@protoc_insertion_point(field_get:cs.C2S_Login.tokenId)
  return tokenid_;
}
inline void C2S_Login::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:cs.C2S_Login.tokenId)
}

// uint64 uid = 2;
inline void C2S_Login::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 C2S_Login::uid() const {
  // @@protoc_insertion_point(field_get:cs.C2S_Login.uid)
  return uid_;
}
inline void C2S_Login::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:cs.C2S_Login.uid)
}

// -------------------------------------------------------------------

// S2C_Login

// uint32 ret = 1;
inline void S2C_Login::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 S2C_Login::ret() const {
  // @@protoc_insertion_point(field_get:cs.S2C_Login.ret)
  return ret_;
}
inline void S2C_Login::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:cs.S2C_Login.ret)
}

// -------------------------------------------------------------------

// C2S_Create

// uint64 tokenId = 1;
inline void C2S_Create::clear_tokenid() {
  tokenid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 C2S_Create::tokenid() const {
  // @@protoc_insertion_point(field_get:cs.C2S_Create.tokenId)
  return tokenid_;
}
inline void C2S_Create::set_tokenid(::google::protobuf::uint64 value) {
  
  tokenid_ = value;
  // @@protoc_insertion_point(field_set:cs.C2S_Create.tokenId)
}

// uint64 uid = 2;
inline void C2S_Create::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 C2S_Create::uid() const {
  // @@protoc_insertion_point(field_get:cs.C2S_Create.uid)
  return uid_;
}
inline void C2S_Create::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:cs.C2S_Create.uid)
}

// -------------------------------------------------------------------

// S2C_Create

// uint32 ret = 1;
inline void S2C_Create::clear_ret() {
  ret_ = 0u;
}
inline ::google::protobuf::uint32 S2C_Create::ret() const {
  // @@protoc_insertion_point(field_get:cs.S2C_Create.ret)
  return ret_;
}
inline void S2C_Create::set_ret(::google::protobuf::uint32 value) {
  
  ret_ = value;
  // @@protoc_insertion_point(field_set:cs.S2C_Create.ret)
}

// uint64 uid = 2;
inline void S2C_Create::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 S2C_Create::uid() const {
  // @@protoc_insertion_point(field_get:cs.S2C_Create.uid)
  return uid_;
}
inline void S2C_Create::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:cs.S2C_Create.uid)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace cs

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cs::ProtoID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cs::ProtoID>() {
  return ::cs::ProtoID_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cs_2eproto__INCLUDED
