// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cisco_ios_xr_ipv6_nd_oper/ipv6_node_discovery/nodes/node/neighbor_summary/ipv6_nd_neighbor_entry_summary.proto

#ifndef PROTOBUF_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto__INCLUDED
#define PROTOBUF_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto__INCLUDED

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

namespace protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsipv6_nd_neighbor_entry_summary_KEYSImpl();
void InitDefaultsipv6_nd_neighbor_entry_summary_KEYS();
void InitDefaultsipv6_nd_neighbor_entry_summaryImpl();
void InitDefaultsipv6_nd_neighbor_entry_summary();
void InitDefaultsbag_nbr_entry_sumImpl();
void InitDefaultsbag_nbr_entry_sum();
inline void InitDefaults() {
  InitDefaultsipv6_nd_neighbor_entry_summary_KEYS();
  InitDefaultsipv6_nd_neighbor_entry_summary();
  InitDefaultsbag_nbr_entry_sum();
}
}  // namespace protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto
namespace cisco_ios_xr_ipv6_nd_oper {
namespace ipv6_node_discovery {
namespace nodes {
namespace node {
namespace neighbor_summary {
class bag_nbr_entry_sum;
class bag_nbr_entry_sumDefaultTypeInternal;
extern bag_nbr_entry_sumDefaultTypeInternal _bag_nbr_entry_sum_default_instance_;
class ipv6_nd_neighbor_entry_summary;
class ipv6_nd_neighbor_entry_summaryDefaultTypeInternal;
extern ipv6_nd_neighbor_entry_summaryDefaultTypeInternal _ipv6_nd_neighbor_entry_summary_default_instance_;
class ipv6_nd_neighbor_entry_summary_KEYS;
class ipv6_nd_neighbor_entry_summary_KEYSDefaultTypeInternal;
extern ipv6_nd_neighbor_entry_summary_KEYSDefaultTypeInternal _ipv6_nd_neighbor_entry_summary_KEYS_default_instance_;
}  // namespace neighbor_summary
}  // namespace node
}  // namespace nodes
}  // namespace ipv6_node_discovery
}  // namespace cisco_ios_xr_ipv6_nd_oper
namespace cisco_ios_xr_ipv6_nd_oper {
namespace ipv6_node_discovery {
namespace nodes {
namespace node {
namespace neighbor_summary {

// ===================================================================

class ipv6_nd_neighbor_entry_summary_KEYS : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS) */ {
 public:
  ipv6_nd_neighbor_entry_summary_KEYS();
  virtual ~ipv6_nd_neighbor_entry_summary_KEYS();

  ipv6_nd_neighbor_entry_summary_KEYS(const ipv6_nd_neighbor_entry_summary_KEYS& from);

  inline ipv6_nd_neighbor_entry_summary_KEYS& operator=(const ipv6_nd_neighbor_entry_summary_KEYS& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ipv6_nd_neighbor_entry_summary_KEYS(ipv6_nd_neighbor_entry_summary_KEYS&& from) noexcept
    : ipv6_nd_neighbor_entry_summary_KEYS() {
    *this = ::std::move(from);
  }

  inline ipv6_nd_neighbor_entry_summary_KEYS& operator=(ipv6_nd_neighbor_entry_summary_KEYS&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ipv6_nd_neighbor_entry_summary_KEYS& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ipv6_nd_neighbor_entry_summary_KEYS* internal_default_instance() {
    return reinterpret_cast<const ipv6_nd_neighbor_entry_summary_KEYS*>(
               &_ipv6_nd_neighbor_entry_summary_KEYS_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ipv6_nd_neighbor_entry_summary_KEYS* other);
  friend void swap(ipv6_nd_neighbor_entry_summary_KEYS& a, ipv6_nd_neighbor_entry_summary_KEYS& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ipv6_nd_neighbor_entry_summary_KEYS* New() const PROTOBUF_FINAL { return New(NULL); }

  ipv6_nd_neighbor_entry_summary_KEYS* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ipv6_nd_neighbor_entry_summary_KEYS& from);
  void MergeFrom(const ipv6_nd_neighbor_entry_summary_KEYS& from);
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
  void InternalSwap(ipv6_nd_neighbor_entry_summary_KEYS* other);
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

  // string node_name = 1;
  void clear_node_name();
  static const int kNodeNameFieldNumber = 1;
  const ::std::string& node_name() const;
  void set_node_name(const ::std::string& value);
  #if LANG_CXX11
  void set_node_name(::std::string&& value);
  #endif
  void set_node_name(const char* value);
  void set_node_name(const char* value, size_t size);
  ::std::string* mutable_node_name();
  ::std::string* release_node_name();
  void set_allocated_node_name(::std::string* node_name);

  // @@protoc_insertion_point(class_scope:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr node_name_;
  mutable int _cached_size_;
  friend struct ::protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto::TableStruct;
  friend void ::protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto::InitDefaultsipv6_nd_neighbor_entry_summary_KEYSImpl();
};
// -------------------------------------------------------------------

class ipv6_nd_neighbor_entry_summary : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary) */ {
 public:
  ipv6_nd_neighbor_entry_summary();
  virtual ~ipv6_nd_neighbor_entry_summary();

  ipv6_nd_neighbor_entry_summary(const ipv6_nd_neighbor_entry_summary& from);

  inline ipv6_nd_neighbor_entry_summary& operator=(const ipv6_nd_neighbor_entry_summary& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ipv6_nd_neighbor_entry_summary(ipv6_nd_neighbor_entry_summary&& from) noexcept
    : ipv6_nd_neighbor_entry_summary() {
    *this = ::std::move(from);
  }

  inline ipv6_nd_neighbor_entry_summary& operator=(ipv6_nd_neighbor_entry_summary&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ipv6_nd_neighbor_entry_summary& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ipv6_nd_neighbor_entry_summary* internal_default_instance() {
    return reinterpret_cast<const ipv6_nd_neighbor_entry_summary*>(
               &_ipv6_nd_neighbor_entry_summary_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ipv6_nd_neighbor_entry_summary* other);
  friend void swap(ipv6_nd_neighbor_entry_summary& a, ipv6_nd_neighbor_entry_summary& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ipv6_nd_neighbor_entry_summary* New() const PROTOBUF_FINAL { return New(NULL); }

  ipv6_nd_neighbor_entry_summary* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ipv6_nd_neighbor_entry_summary& from);
  void MergeFrom(const ipv6_nd_neighbor_entry_summary& from);
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
  void InternalSwap(ipv6_nd_neighbor_entry_summary* other);
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

  // .cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum multicast = 50;
  bool has_multicast() const;
  void clear_multicast();
  static const int kMulticastFieldNumber = 50;
  const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum& multicast() const;
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* release_multicast();
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* mutable_multicast();
  void set_allocated_multicast(::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* multicast);

  // .cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum static = 51;
  bool has_static_() const;
  void clear_static_();
  static const int kStaticFieldNumber = 51;
  const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum& static_() const;
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* release_static_();
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* mutable_static_();
  void set_allocated_static_(::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* static_);

  // .cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum dynamic = 52;
  bool has_dynamic() const;
  void clear_dynamic();
  static const int kDynamicFieldNumber = 52;
  const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum& dynamic() const;
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* release_dynamic();
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* mutable_dynamic();
  void set_allocated_dynamic(::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* dynamic);

  // uint32 total_neighbor_entries = 53;
  void clear_total_neighbor_entries();
  static const int kTotalNeighborEntriesFieldNumber = 53;
  ::google::protobuf::uint32 total_neighbor_entries() const;
  void set_total_neighbor_entries(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* multicast_;
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* static__;
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* dynamic_;
  ::google::protobuf::uint32 total_neighbor_entries_;
  mutable int _cached_size_;
  friend struct ::protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto::TableStruct;
  friend void ::protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto::InitDefaultsipv6_nd_neighbor_entry_summaryImpl();
};
// -------------------------------------------------------------------

class bag_nbr_entry_sum : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum) */ {
 public:
  bag_nbr_entry_sum();
  virtual ~bag_nbr_entry_sum();

  bag_nbr_entry_sum(const bag_nbr_entry_sum& from);

  inline bag_nbr_entry_sum& operator=(const bag_nbr_entry_sum& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  bag_nbr_entry_sum(bag_nbr_entry_sum&& from) noexcept
    : bag_nbr_entry_sum() {
    *this = ::std::move(from);
  }

  inline bag_nbr_entry_sum& operator=(bag_nbr_entry_sum&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const bag_nbr_entry_sum& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const bag_nbr_entry_sum* internal_default_instance() {
    return reinterpret_cast<const bag_nbr_entry_sum*>(
               &_bag_nbr_entry_sum_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(bag_nbr_entry_sum* other);
  friend void swap(bag_nbr_entry_sum& a, bag_nbr_entry_sum& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline bag_nbr_entry_sum* New() const PROTOBUF_FINAL { return New(NULL); }

  bag_nbr_entry_sum* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const bag_nbr_entry_sum& from);
  void MergeFrom(const bag_nbr_entry_sum& from);
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
  void InternalSwap(bag_nbr_entry_sum* other);
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

  // uint32 incomplete_entries = 1;
  void clear_incomplete_entries();
  static const int kIncompleteEntriesFieldNumber = 1;
  ::google::protobuf::uint32 incomplete_entries() const;
  void set_incomplete_entries(::google::protobuf::uint32 value);

  // uint32 reachable_entries = 2;
  void clear_reachable_entries();
  static const int kReachableEntriesFieldNumber = 2;
  ::google::protobuf::uint32 reachable_entries() const;
  void set_reachable_entries(::google::protobuf::uint32 value);

  // uint32 stale_entries = 3;
  void clear_stale_entries();
  static const int kStaleEntriesFieldNumber = 3;
  ::google::protobuf::uint32 stale_entries() const;
  void set_stale_entries(::google::protobuf::uint32 value);

  // uint32 delayed_entries = 4;
  void clear_delayed_entries();
  static const int kDelayedEntriesFieldNumber = 4;
  ::google::protobuf::uint32 delayed_entries() const;
  void set_delayed_entries(::google::protobuf::uint32 value);

  // uint32 probe_entries = 5;
  void clear_probe_entries();
  static const int kProbeEntriesFieldNumber = 5;
  ::google::protobuf::uint32 probe_entries() const;
  void set_probe_entries(::google::protobuf::uint32 value);

  // uint32 deleted_entries = 6;
  void clear_deleted_entries();
  static const int kDeletedEntriesFieldNumber = 6;
  ::google::protobuf::uint32 deleted_entries() const;
  void set_deleted_entries(::google::protobuf::uint32 value);

  // uint32 subtotal_neighbor_entries = 7;
  void clear_subtotal_neighbor_entries();
  static const int kSubtotalNeighborEntriesFieldNumber = 7;
  ::google::protobuf::uint32 subtotal_neighbor_entries() const;
  void set_subtotal_neighbor_entries(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 incomplete_entries_;
  ::google::protobuf::uint32 reachable_entries_;
  ::google::protobuf::uint32 stale_entries_;
  ::google::protobuf::uint32 delayed_entries_;
  ::google::protobuf::uint32 probe_entries_;
  ::google::protobuf::uint32 deleted_entries_;
  ::google::protobuf::uint32 subtotal_neighbor_entries_;
  mutable int _cached_size_;
  friend struct ::protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto::TableStruct;
  friend void ::protobuf_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto::InitDefaultsbag_nbr_entry_sumImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ipv6_nd_neighbor_entry_summary_KEYS

// string node_name = 1;
inline void ipv6_nd_neighbor_entry_summary_KEYS::clear_node_name() {
  node_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ipv6_nd_neighbor_entry_summary_KEYS::node_name() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
  return node_name_.GetNoArena();
}
inline void ipv6_nd_neighbor_entry_summary_KEYS::set_node_name(const ::std::string& value) {
  
  node_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
}
#if LANG_CXX11
inline void ipv6_nd_neighbor_entry_summary_KEYS::set_node_name(::std::string&& value) {
  
  node_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
}
#endif
inline void ipv6_nd_neighbor_entry_summary_KEYS::set_node_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  node_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
}
inline void ipv6_nd_neighbor_entry_summary_KEYS::set_node_name(const char* value, size_t size) {
  
  node_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
}
inline ::std::string* ipv6_nd_neighbor_entry_summary_KEYS::mutable_node_name() {
  
  // @@protoc_insertion_point(field_mutable:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
  return node_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ipv6_nd_neighbor_entry_summary_KEYS::release_node_name() {
  // @@protoc_insertion_point(field_release:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
  
  return node_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ipv6_nd_neighbor_entry_summary_KEYS::set_allocated_node_name(::std::string* node_name) {
  if (node_name != NULL) {
    
  } else {
    
  }
  node_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), node_name);
  // @@protoc_insertion_point(field_set_allocated:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary_KEYS.node_name)
}

// -------------------------------------------------------------------

// ipv6_nd_neighbor_entry_summary

// .cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum multicast = 50;
inline bool ipv6_nd_neighbor_entry_summary::has_multicast() const {
  return this != internal_default_instance() && multicast_ != NULL;
}
inline void ipv6_nd_neighbor_entry_summary::clear_multicast() {
  if (GetArenaNoVirtual() == NULL && multicast_ != NULL) {
    delete multicast_;
  }
  multicast_ = NULL;
}
inline const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum& ipv6_nd_neighbor_entry_summary::multicast() const {
  const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* p = multicast_;
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.multicast)
  return p != NULL ? *p : *reinterpret_cast<const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum*>(
      &::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::_bag_nbr_entry_sum_default_instance_);
}
inline ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* ipv6_nd_neighbor_entry_summary::release_multicast() {
  // @@protoc_insertion_point(field_release:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.multicast)
  
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* temp = multicast_;
  multicast_ = NULL;
  return temp;
}
inline ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* ipv6_nd_neighbor_entry_summary::mutable_multicast() {
  
  if (multicast_ == NULL) {
    multicast_ = new ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum;
  }
  // @@protoc_insertion_point(field_mutable:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.multicast)
  return multicast_;
}
inline void ipv6_nd_neighbor_entry_summary::set_allocated_multicast(::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* multicast) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete multicast_;
  }
  if (multicast) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      multicast = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, multicast, submessage_arena);
    }
    
  } else {
    
  }
  multicast_ = multicast;
  // @@protoc_insertion_point(field_set_allocated:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.multicast)
}

// .cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum static = 51;
inline bool ipv6_nd_neighbor_entry_summary::has_static_() const {
  return this != internal_default_instance() && static__ != NULL;
}
inline void ipv6_nd_neighbor_entry_summary::clear_static_() {
  if (GetArenaNoVirtual() == NULL && static__ != NULL) {
    delete static__;
  }
  static__ = NULL;
}
inline const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum& ipv6_nd_neighbor_entry_summary::static_() const {
  const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* p = static__;
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.static)
  return p != NULL ? *p : *reinterpret_cast<const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum*>(
      &::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::_bag_nbr_entry_sum_default_instance_);
}
inline ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* ipv6_nd_neighbor_entry_summary::release_static_() {
  // @@protoc_insertion_point(field_release:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.static)
  
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* temp = static__;
  static__ = NULL;
  return temp;
}
inline ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* ipv6_nd_neighbor_entry_summary::mutable_static_() {
  
  if (static__ == NULL) {
    static__ = new ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum;
  }
  // @@protoc_insertion_point(field_mutable:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.static)
  return static__;
}
inline void ipv6_nd_neighbor_entry_summary::set_allocated_static_(::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* static_) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete static__;
  }
  if (static_) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      static_ = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, static_, submessage_arena);
    }
    
  } else {
    
  }
  static__ = static_;
  // @@protoc_insertion_point(field_set_allocated:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.static)
}

// .cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum dynamic = 52;
inline bool ipv6_nd_neighbor_entry_summary::has_dynamic() const {
  return this != internal_default_instance() && dynamic_ != NULL;
}
inline void ipv6_nd_neighbor_entry_summary::clear_dynamic() {
  if (GetArenaNoVirtual() == NULL && dynamic_ != NULL) {
    delete dynamic_;
  }
  dynamic_ = NULL;
}
inline const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum& ipv6_nd_neighbor_entry_summary::dynamic() const {
  const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* p = dynamic_;
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.dynamic)
  return p != NULL ? *p : *reinterpret_cast<const ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum*>(
      &::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::_bag_nbr_entry_sum_default_instance_);
}
inline ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* ipv6_nd_neighbor_entry_summary::release_dynamic() {
  // @@protoc_insertion_point(field_release:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.dynamic)
  
  ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* temp = dynamic_;
  dynamic_ = NULL;
  return temp;
}
inline ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* ipv6_nd_neighbor_entry_summary::mutable_dynamic() {
  
  if (dynamic_ == NULL) {
    dynamic_ = new ::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum;
  }
  // @@protoc_insertion_point(field_mutable:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.dynamic)
  return dynamic_;
}
inline void ipv6_nd_neighbor_entry_summary::set_allocated_dynamic(::cisco_ios_xr_ipv6_nd_oper::ipv6_node_discovery::nodes::node::neighbor_summary::bag_nbr_entry_sum* dynamic) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete dynamic_;
  }
  if (dynamic) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      dynamic = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, dynamic, submessage_arena);
    }
    
  } else {
    
  }
  dynamic_ = dynamic;
  // @@protoc_insertion_point(field_set_allocated:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.dynamic)
}

// uint32 total_neighbor_entries = 53;
inline void ipv6_nd_neighbor_entry_summary::clear_total_neighbor_entries() {
  total_neighbor_entries_ = 0u;
}
inline ::google::protobuf::uint32 ipv6_nd_neighbor_entry_summary::total_neighbor_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.total_neighbor_entries)
  return total_neighbor_entries_;
}
inline void ipv6_nd_neighbor_entry_summary::set_total_neighbor_entries(::google::protobuf::uint32 value) {
  
  total_neighbor_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.ipv6_nd_neighbor_entry_summary.total_neighbor_entries)
}

// -------------------------------------------------------------------

// bag_nbr_entry_sum

// uint32 incomplete_entries = 1;
inline void bag_nbr_entry_sum::clear_incomplete_entries() {
  incomplete_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::incomplete_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.incomplete_entries)
  return incomplete_entries_;
}
inline void bag_nbr_entry_sum::set_incomplete_entries(::google::protobuf::uint32 value) {
  
  incomplete_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.incomplete_entries)
}

// uint32 reachable_entries = 2;
inline void bag_nbr_entry_sum::clear_reachable_entries() {
  reachable_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::reachable_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.reachable_entries)
  return reachable_entries_;
}
inline void bag_nbr_entry_sum::set_reachable_entries(::google::protobuf::uint32 value) {
  
  reachable_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.reachable_entries)
}

// uint32 stale_entries = 3;
inline void bag_nbr_entry_sum::clear_stale_entries() {
  stale_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::stale_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.stale_entries)
  return stale_entries_;
}
inline void bag_nbr_entry_sum::set_stale_entries(::google::protobuf::uint32 value) {
  
  stale_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.stale_entries)
}

// uint32 delayed_entries = 4;
inline void bag_nbr_entry_sum::clear_delayed_entries() {
  delayed_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::delayed_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.delayed_entries)
  return delayed_entries_;
}
inline void bag_nbr_entry_sum::set_delayed_entries(::google::protobuf::uint32 value) {
  
  delayed_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.delayed_entries)
}

// uint32 probe_entries = 5;
inline void bag_nbr_entry_sum::clear_probe_entries() {
  probe_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::probe_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.probe_entries)
  return probe_entries_;
}
inline void bag_nbr_entry_sum::set_probe_entries(::google::protobuf::uint32 value) {
  
  probe_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.probe_entries)
}

// uint32 deleted_entries = 6;
inline void bag_nbr_entry_sum::clear_deleted_entries() {
  deleted_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::deleted_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.deleted_entries)
  return deleted_entries_;
}
inline void bag_nbr_entry_sum::set_deleted_entries(::google::protobuf::uint32 value) {
  
  deleted_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.deleted_entries)
}

// uint32 subtotal_neighbor_entries = 7;
inline void bag_nbr_entry_sum::clear_subtotal_neighbor_entries() {
  subtotal_neighbor_entries_ = 0u;
}
inline ::google::protobuf::uint32 bag_nbr_entry_sum::subtotal_neighbor_entries() const {
  // @@protoc_insertion_point(field_get:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.subtotal_neighbor_entries)
  return subtotal_neighbor_entries_;
}
inline void bag_nbr_entry_sum::set_subtotal_neighbor_entries(::google::protobuf::uint32 value) {
  
  subtotal_neighbor_entries_ = value;
  // @@protoc_insertion_point(field_set:cisco_ios_xr_ipv6_nd_oper.ipv6_node_discovery.nodes.node.neighbor_summary.bag_nbr_entry_sum.subtotal_neighbor_entries)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace neighbor_summary
}  // namespace node
}  // namespace nodes
}  // namespace ipv6_node_discovery
}  // namespace cisco_ios_xr_ipv6_nd_oper

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cisco_5fios_5fxr_5fipv6_5fnd_5foper_2fipv6_5fnode_5fdiscovery_2fnodes_2fnode_2fneighbor_5fsummary_2fipv6_5fnd_5fneighbor_5fentry_5fsummary_2eproto__INCLUDED