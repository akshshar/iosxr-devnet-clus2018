// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mdt_grpc_dialout/mdt_grpc_dialout.proto

#ifndef PROTOBUF_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto__INCLUDED
#define PROTOBUF_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMdtDialoutArgsImpl();
void InitDefaultsMdtDialoutArgs();
inline void InitDefaults() {
  InitDefaultsMdtDialoutArgs();
}
}  // namespace protobuf_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto
namespace mdt_dialout {
class MdtDialoutArgs;
class MdtDialoutArgsDefaultTypeInternal;
extern MdtDialoutArgsDefaultTypeInternal _MdtDialoutArgs_default_instance_;
}  // namespace mdt_dialout
namespace mdt_dialout {

// ===================================================================

class MdtDialoutArgs : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mdt_dialout.MdtDialoutArgs) */ {
 public:
  MdtDialoutArgs();
  virtual ~MdtDialoutArgs();

  MdtDialoutArgs(const MdtDialoutArgs& from);

  inline MdtDialoutArgs& operator=(const MdtDialoutArgs& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MdtDialoutArgs(MdtDialoutArgs&& from) noexcept
    : MdtDialoutArgs() {
    *this = ::std::move(from);
  }

  inline MdtDialoutArgs& operator=(MdtDialoutArgs&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MdtDialoutArgs& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MdtDialoutArgs* internal_default_instance() {
    return reinterpret_cast<const MdtDialoutArgs*>(
               &_MdtDialoutArgs_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MdtDialoutArgs* other);
  friend void swap(MdtDialoutArgs& a, MdtDialoutArgs& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MdtDialoutArgs* New() const PROTOBUF_FINAL { return New(NULL); }

  MdtDialoutArgs* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MdtDialoutArgs& from);
  void MergeFrom(const MdtDialoutArgs& from);
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
  void InternalSwap(MdtDialoutArgs* other);
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

  // bytes data = 2;
  void clear_data();
  static const int kDataFieldNumber = 2;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // string errors = 3;
  void clear_errors();
  static const int kErrorsFieldNumber = 3;
  const ::std::string& errors() const;
  void set_errors(const ::std::string& value);
  #if LANG_CXX11
  void set_errors(::std::string&& value);
  #endif
  void set_errors(const char* value);
  void set_errors(const char* value, size_t size);
  ::std::string* mutable_errors();
  ::std::string* release_errors();
  void set_allocated_errors(::std::string* errors);

  // int64 ReqId = 1;
  void clear_reqid();
  static const int kReqIdFieldNumber = 1;
  ::google::protobuf::int64 reqid() const;
  void set_reqid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:mdt_dialout.MdtDialoutArgs)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::internal::ArenaStringPtr errors_;
  ::google::protobuf::int64 reqid_;
  mutable int _cached_size_;
  friend struct ::protobuf_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto::TableStruct;
  friend void ::protobuf_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto::InitDefaultsMdtDialoutArgsImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MdtDialoutArgs

// int64 ReqId = 1;
inline void MdtDialoutArgs::clear_reqid() {
  reqid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MdtDialoutArgs::reqid() const {
  // @@protoc_insertion_point(field_get:mdt_dialout.MdtDialoutArgs.ReqId)
  return reqid_;
}
inline void MdtDialoutArgs::set_reqid(::google::protobuf::int64 value) {
  
  reqid_ = value;
  // @@protoc_insertion_point(field_set:mdt_dialout.MdtDialoutArgs.ReqId)
}

// bytes data = 2;
inline void MdtDialoutArgs::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MdtDialoutArgs::data() const {
  // @@protoc_insertion_point(field_get:mdt_dialout.MdtDialoutArgs.data)
  return data_.GetNoArena();
}
inline void MdtDialoutArgs::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mdt_dialout.MdtDialoutArgs.data)
}
#if LANG_CXX11
inline void MdtDialoutArgs::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mdt_dialout.MdtDialoutArgs.data)
}
#endif
inline void MdtDialoutArgs::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mdt_dialout.MdtDialoutArgs.data)
}
inline void MdtDialoutArgs::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mdt_dialout.MdtDialoutArgs.data)
}
inline ::std::string* MdtDialoutArgs::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:mdt_dialout.MdtDialoutArgs.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MdtDialoutArgs::release_data() {
  // @@protoc_insertion_point(field_release:mdt_dialout.MdtDialoutArgs.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MdtDialoutArgs::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:mdt_dialout.MdtDialoutArgs.data)
}

// string errors = 3;
inline void MdtDialoutArgs::clear_errors() {
  errors_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MdtDialoutArgs::errors() const {
  // @@protoc_insertion_point(field_get:mdt_dialout.MdtDialoutArgs.errors)
  return errors_.GetNoArena();
}
inline void MdtDialoutArgs::set_errors(const ::std::string& value) {
  
  errors_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:mdt_dialout.MdtDialoutArgs.errors)
}
#if LANG_CXX11
inline void MdtDialoutArgs::set_errors(::std::string&& value) {
  
  errors_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mdt_dialout.MdtDialoutArgs.errors)
}
#endif
inline void MdtDialoutArgs::set_errors(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  errors_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mdt_dialout.MdtDialoutArgs.errors)
}
inline void MdtDialoutArgs::set_errors(const char* value, size_t size) {
  
  errors_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mdt_dialout.MdtDialoutArgs.errors)
}
inline ::std::string* MdtDialoutArgs::mutable_errors() {
  
  // @@protoc_insertion_point(field_mutable:mdt_dialout.MdtDialoutArgs.errors)
  return errors_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MdtDialoutArgs::release_errors() {
  // @@protoc_insertion_point(field_release:mdt_dialout.MdtDialoutArgs.errors)
  
  return errors_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MdtDialoutArgs::set_allocated_errors(::std::string* errors) {
  if (errors != NULL) {
    
  } else {
    
  }
  errors_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), errors);
  // @@protoc_insertion_point(field_set_allocated:mdt_dialout.MdtDialoutArgs.errors)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mdt_dialout

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mdt_5fgrpc_5fdialout_2fmdt_5fgrpc_5fdialout_2eproto__INCLUDED