// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/statsd/statsd_tracing_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "protos/perfetto/config/statsd/atom_ids.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto;
namespace perfetto {
namespace protos {
class StatsdPullAtomConfig;
struct StatsdPullAtomConfigDefaultTypeInternal;
extern StatsdPullAtomConfigDefaultTypeInternal _StatsdPullAtomConfig_default_instance_;
class StatsdTracingConfig;
struct StatsdTracingConfigDefaultTypeInternal;
extern StatsdTracingConfigDefaultTypeInternal _StatsdTracingConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::StatsdPullAtomConfig* Arena::CreateMaybeMessage<::perfetto::protos::StatsdPullAtomConfig>(Arena*);
template <>
::perfetto::protos::StatsdTracingConfig* Arena::CreateMaybeMessage<::perfetto::protos::StatsdTracingConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class StatsdTracingConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.StatsdTracingConfig) */ {
 public:
  inline StatsdTracingConfig() : StatsdTracingConfig(nullptr) {}
  ~StatsdTracingConfig() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR StatsdTracingConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StatsdTracingConfig(const StatsdTracingConfig& from);
  StatsdTracingConfig(StatsdTracingConfig&& from) noexcept
    : StatsdTracingConfig() {
    *this = ::std::move(from);
  }

  inline StatsdTracingConfig& operator=(const StatsdTracingConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatsdTracingConfig& operator=(StatsdTracingConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StatsdTracingConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const StatsdTracingConfig* internal_default_instance() {
    return reinterpret_cast<const StatsdTracingConfig*>(
               &_StatsdTracingConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StatsdTracingConfig& a, StatsdTracingConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsdTracingConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatsdTracingConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StatsdTracingConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StatsdTracingConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StatsdTracingConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StatsdTracingConfig& from) {
    StatsdTracingConfig::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StatsdTracingConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.StatsdTracingConfig";
  }
  protected:
  explicit StatsdTracingConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPushAtomIdFieldNumber = 1,
    kRawPushAtomIdFieldNumber = 2,
    kPullConfigFieldNumber = 3,
  };
  // repeated .perfetto.protos.AtomId push_atom_id = 1;
  int push_atom_id_size() const;
  private:
  int _internal_push_atom_id_size() const;

  public:
  void clear_push_atom_id() ;
  public:
  ::perfetto::protos::AtomId push_atom_id(int index) const;
  void set_push_atom_id(int index, ::perfetto::protos::AtomId value);
  void add_push_atom_id(::perfetto::protos::AtomId value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& push_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_push_atom_id();

  private:
  ::perfetto::protos::AtomId _internal_push_atom_id(int index) const;
  void _internal_add_push_atom_id(::perfetto::protos::AtomId value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& _internal_push_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_push_atom_id();

  public:
  // repeated int32 raw_push_atom_id = 2;
  int raw_push_atom_id_size() const;
  private:
  int _internal_raw_push_atom_id_size() const;

  public:
  void clear_raw_push_atom_id() ;
  ::int32_t raw_push_atom_id(int index) const;
  void set_raw_push_atom_id(int index, ::int32_t value);
  void add_raw_push_atom_id(::int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& raw_push_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* mutable_raw_push_atom_id();

  private:
  ::int32_t _internal_raw_push_atom_id(int index) const;
  void _internal_add_raw_push_atom_id(::int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& _internal_raw_push_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* _internal_mutable_raw_push_atom_id();

  public:
  // repeated .perfetto.protos.StatsdPullAtomConfig pull_config = 3;
  int pull_config_size() const;
  private:
  int _internal_pull_config_size() const;

  public:
  void clear_pull_config() ;
  ::perfetto::protos::StatsdPullAtomConfig* mutable_pull_config(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::StatsdPullAtomConfig >*
      mutable_pull_config();
  private:
  const ::perfetto::protos::StatsdPullAtomConfig& _internal_pull_config(int index) const;
  ::perfetto::protos::StatsdPullAtomConfig* _internal_add_pull_config();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::StatsdPullAtomConfig>& _internal_pull_config() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::StatsdPullAtomConfig>* _internal_mutable_pull_config();
  public:
  const ::perfetto::protos::StatsdPullAtomConfig& pull_config(int index) const;
  ::perfetto::protos::StatsdPullAtomConfig* add_pull_config();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::StatsdPullAtomConfig >&
      pull_config() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.StatsdTracingConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> push_atom_id_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t> raw_push_atom_id_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::StatsdPullAtomConfig > pull_config_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto;
};// -------------------------------------------------------------------

class StatsdPullAtomConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.StatsdPullAtomConfig) */ {
 public:
  inline StatsdPullAtomConfig() : StatsdPullAtomConfig(nullptr) {}
  ~StatsdPullAtomConfig() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR StatsdPullAtomConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StatsdPullAtomConfig(const StatsdPullAtomConfig& from);
  StatsdPullAtomConfig(StatsdPullAtomConfig&& from) noexcept
    : StatsdPullAtomConfig() {
    *this = ::std::move(from);
  }

  inline StatsdPullAtomConfig& operator=(const StatsdPullAtomConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline StatsdPullAtomConfig& operator=(StatsdPullAtomConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StatsdPullAtomConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const StatsdPullAtomConfig* internal_default_instance() {
    return reinterpret_cast<const StatsdPullAtomConfig*>(
               &_StatsdPullAtomConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StatsdPullAtomConfig& a, StatsdPullAtomConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsdPullAtomConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StatsdPullAtomConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StatsdPullAtomConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StatsdPullAtomConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StatsdPullAtomConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StatsdPullAtomConfig& from) {
    StatsdPullAtomConfig::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StatsdPullAtomConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.StatsdPullAtomConfig";
  }
  protected:
  explicit StatsdPullAtomConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPullAtomIdFieldNumber = 1,
    kRawPullAtomIdFieldNumber = 2,
    kPackagesFieldNumber = 4,
    kPullFrequencyMsFieldNumber = 3,
  };
  // repeated .perfetto.protos.AtomId pull_atom_id = 1;
  int pull_atom_id_size() const;
  private:
  int _internal_pull_atom_id_size() const;

  public:
  void clear_pull_atom_id() ;
  public:
  ::perfetto::protos::AtomId pull_atom_id(int index) const;
  void set_pull_atom_id(int index, ::perfetto::protos::AtomId value);
  void add_pull_atom_id(::perfetto::protos::AtomId value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& pull_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_pull_atom_id();

  private:
  ::perfetto::protos::AtomId _internal_pull_atom_id(int index) const;
  void _internal_add_pull_atom_id(::perfetto::protos::AtomId value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& _internal_pull_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_pull_atom_id();

  public:
  // repeated int32 raw_pull_atom_id = 2;
  int raw_pull_atom_id_size() const;
  private:
  int _internal_raw_pull_atom_id_size() const;

  public:
  void clear_raw_pull_atom_id() ;
  ::int32_t raw_pull_atom_id(int index) const;
  void set_raw_pull_atom_id(int index, ::int32_t value);
  void add_raw_pull_atom_id(::int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& raw_pull_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* mutable_raw_pull_atom_id();

  private:
  ::int32_t _internal_raw_pull_atom_id(int index) const;
  void _internal_add_raw_pull_atom_id(::int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& _internal_raw_pull_atom_id() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* _internal_mutable_raw_pull_atom_id();

  public:
  // repeated string packages = 4;
  int packages_size() const;
  private:
  int _internal_packages_size() const;

  public:
  void clear_packages() ;
  const std::string& packages(int index) const;
  std::string* mutable_packages(int index);
  void set_packages(int index, const std::string& value);
  void set_packages(int index, std::string&& value);
  void set_packages(int index, const char* value);
  void set_packages(int index, const char* value, std::size_t size);
  void set_packages(int index, absl::string_view value);
  std::string* add_packages();
  void add_packages(const std::string& value);
  void add_packages(std::string&& value);
  void add_packages(const char* value);
  void add_packages(const char* value, std::size_t size);
  void add_packages(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& packages() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_packages();

  private:
  const std::string& _internal_packages(int index) const;
  std::string* _internal_add_packages();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_packages() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_packages();

  public:
  // optional int32 pull_frequency_ms = 3;
  bool has_pull_frequency_ms() const;
  void clear_pull_frequency_ms() ;
  ::int32_t pull_frequency_ms() const;
  void set_pull_frequency_ms(::int32_t value);

  private:
  ::int32_t _internal_pull_frequency_ms() const;
  void _internal_set_pull_frequency_ms(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.StatsdPullAtomConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> pull_atom_id_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t> raw_pull_atom_id_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> packages_;
    ::int32_t pull_frequency_ms_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// StatsdTracingConfig

// repeated .perfetto.protos.AtomId push_atom_id = 1;
inline int StatsdTracingConfig::_internal_push_atom_id_size() const {
  return _impl_.push_atom_id_.size();
}
inline int StatsdTracingConfig::push_atom_id_size() const {
  return _internal_push_atom_id_size();
}
inline void StatsdTracingConfig::clear_push_atom_id() {
  _internal_mutable_push_atom_id()->Clear();
}
inline ::perfetto::protos::AtomId StatsdTracingConfig::push_atom_id(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdTracingConfig.push_atom_id)
  return _internal_push_atom_id(index);
}
inline void StatsdTracingConfig::set_push_atom_id(int index, ::perfetto::protos::AtomId value) {
  assert(::perfetto::protos::AtomId_IsValid(value));
  _internal_mutable_push_atom_id()->Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdTracingConfig.push_atom_id)
}
inline void StatsdTracingConfig::add_push_atom_id(::perfetto::protos::AtomId value) {
  _internal_add_push_atom_id(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdTracingConfig.push_atom_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& StatsdTracingConfig::push_atom_id() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdTracingConfig.push_atom_id)
  return _internal_push_atom_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* StatsdTracingConfig::mutable_push_atom_id() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdTracingConfig.push_atom_id)
  return _internal_mutable_push_atom_id();
}
inline ::perfetto::protos::AtomId StatsdTracingConfig::_internal_push_atom_id(int index) const {
  return static_cast<::perfetto::protos::AtomId>(_internal_push_atom_id().Get(index));
}
inline void StatsdTracingConfig::_internal_add_push_atom_id(::perfetto::protos::AtomId value) {
  assert(::perfetto::protos::AtomId_IsValid(value));
  _internal_mutable_push_atom_id()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& StatsdTracingConfig::_internal_push_atom_id() const {
  return _impl_.push_atom_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* StatsdTracingConfig::_internal_mutable_push_atom_id() {
  return &_impl_.push_atom_id_;
}

// repeated int32 raw_push_atom_id = 2;
inline int StatsdTracingConfig::_internal_raw_push_atom_id_size() const {
  return _impl_.raw_push_atom_id_.size();
}
inline int StatsdTracingConfig::raw_push_atom_id_size() const {
  return _internal_raw_push_atom_id_size();
}
inline void StatsdTracingConfig::clear_raw_push_atom_id() {
  _internal_mutable_raw_push_atom_id()->Clear();
}
inline ::int32_t StatsdTracingConfig::raw_push_atom_id(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdTracingConfig.raw_push_atom_id)
  return _internal_raw_push_atom_id(index);
}
inline void StatsdTracingConfig::set_raw_push_atom_id(int index, ::int32_t value) {
  _internal_mutable_raw_push_atom_id()->Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdTracingConfig.raw_push_atom_id)
}
inline void StatsdTracingConfig::add_raw_push_atom_id(::int32_t value) {
  _internal_add_raw_push_atom_id(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdTracingConfig.raw_push_atom_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& StatsdTracingConfig::raw_push_atom_id() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdTracingConfig.raw_push_atom_id)
  return _internal_raw_push_atom_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* StatsdTracingConfig::mutable_raw_push_atom_id() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdTracingConfig.raw_push_atom_id)
  return _internal_mutable_raw_push_atom_id();
}

inline ::int32_t StatsdTracingConfig::_internal_raw_push_atom_id(int index) const {
  return _internal_raw_push_atom_id().Get(index);
}
inline void StatsdTracingConfig::_internal_add_raw_push_atom_id(::int32_t value) {
  _internal_mutable_raw_push_atom_id()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& StatsdTracingConfig::_internal_raw_push_atom_id() const {
  return _impl_.raw_push_atom_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* StatsdTracingConfig::_internal_mutable_raw_push_atom_id() {
  return &_impl_.raw_push_atom_id_;
}

// repeated .perfetto.protos.StatsdPullAtomConfig pull_config = 3;
inline int StatsdTracingConfig::_internal_pull_config_size() const {
  return _impl_.pull_config_.size();
}
inline int StatsdTracingConfig::pull_config_size() const {
  return _internal_pull_config_size();
}
inline void StatsdTracingConfig::clear_pull_config() {
  _internal_mutable_pull_config()->Clear();
}
inline ::perfetto::protos::StatsdPullAtomConfig* StatsdTracingConfig::mutable_pull_config(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.StatsdTracingConfig.pull_config)
  return _internal_mutable_pull_config()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::StatsdPullAtomConfig >*
StatsdTracingConfig::mutable_pull_config() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdTracingConfig.pull_config)
  return _internal_mutable_pull_config();
}
inline const ::perfetto::protos::StatsdPullAtomConfig& StatsdTracingConfig::_internal_pull_config(int index) const {
  return _internal_pull_config().Get(index);
}
inline const ::perfetto::protos::StatsdPullAtomConfig& StatsdTracingConfig::pull_config(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdTracingConfig.pull_config)
  return _internal_pull_config(index);
}
inline ::perfetto::protos::StatsdPullAtomConfig* StatsdTracingConfig::_internal_add_pull_config() {
  return _internal_mutable_pull_config()->Add();
}
inline ::perfetto::protos::StatsdPullAtomConfig* StatsdTracingConfig::add_pull_config() {
  ::perfetto::protos::StatsdPullAtomConfig* _add = _internal_add_pull_config();
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdTracingConfig.pull_config)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::StatsdPullAtomConfig >&
StatsdTracingConfig::pull_config() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdTracingConfig.pull_config)
  return _internal_pull_config();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::StatsdPullAtomConfig>&
StatsdTracingConfig::_internal_pull_config() const {
  return _impl_.pull_config_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::StatsdPullAtomConfig>*
StatsdTracingConfig::_internal_mutable_pull_config() {
  return &_impl_.pull_config_;
}

// -------------------------------------------------------------------

// StatsdPullAtomConfig

// repeated .perfetto.protos.AtomId pull_atom_id = 1;
inline int StatsdPullAtomConfig::_internal_pull_atom_id_size() const {
  return _impl_.pull_atom_id_.size();
}
inline int StatsdPullAtomConfig::pull_atom_id_size() const {
  return _internal_pull_atom_id_size();
}
inline void StatsdPullAtomConfig::clear_pull_atom_id() {
  _internal_mutable_pull_atom_id()->Clear();
}
inline ::perfetto::protos::AtomId StatsdPullAtomConfig::pull_atom_id(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdPullAtomConfig.pull_atom_id)
  return _internal_pull_atom_id(index);
}
inline void StatsdPullAtomConfig::set_pull_atom_id(int index, ::perfetto::protos::AtomId value) {
  assert(::perfetto::protos::AtomId_IsValid(value));
  _internal_mutable_pull_atom_id()->Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdPullAtomConfig.pull_atom_id)
}
inline void StatsdPullAtomConfig::add_pull_atom_id(::perfetto::protos::AtomId value) {
  _internal_add_pull_atom_id(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdPullAtomConfig.pull_atom_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& StatsdPullAtomConfig::pull_atom_id() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdPullAtomConfig.pull_atom_id)
  return _internal_pull_atom_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* StatsdPullAtomConfig::mutable_pull_atom_id() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdPullAtomConfig.pull_atom_id)
  return _internal_mutable_pull_atom_id();
}
inline ::perfetto::protos::AtomId StatsdPullAtomConfig::_internal_pull_atom_id(int index) const {
  return static_cast<::perfetto::protos::AtomId>(_internal_pull_atom_id().Get(index));
}
inline void StatsdPullAtomConfig::_internal_add_pull_atom_id(::perfetto::protos::AtomId value) {
  assert(::perfetto::protos::AtomId_IsValid(value));
  _internal_mutable_pull_atom_id()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& StatsdPullAtomConfig::_internal_pull_atom_id() const {
  return _impl_.pull_atom_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* StatsdPullAtomConfig::_internal_mutable_pull_atom_id() {
  return &_impl_.pull_atom_id_;
}

// repeated int32 raw_pull_atom_id = 2;
inline int StatsdPullAtomConfig::_internal_raw_pull_atom_id_size() const {
  return _impl_.raw_pull_atom_id_.size();
}
inline int StatsdPullAtomConfig::raw_pull_atom_id_size() const {
  return _internal_raw_pull_atom_id_size();
}
inline void StatsdPullAtomConfig::clear_raw_pull_atom_id() {
  _internal_mutable_raw_pull_atom_id()->Clear();
}
inline ::int32_t StatsdPullAtomConfig::raw_pull_atom_id(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdPullAtomConfig.raw_pull_atom_id)
  return _internal_raw_pull_atom_id(index);
}
inline void StatsdPullAtomConfig::set_raw_pull_atom_id(int index, ::int32_t value) {
  _internal_mutable_raw_pull_atom_id()->Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdPullAtomConfig.raw_pull_atom_id)
}
inline void StatsdPullAtomConfig::add_raw_pull_atom_id(::int32_t value) {
  _internal_add_raw_pull_atom_id(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdPullAtomConfig.raw_pull_atom_id)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& StatsdPullAtomConfig::raw_pull_atom_id() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdPullAtomConfig.raw_pull_atom_id)
  return _internal_raw_pull_atom_id();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* StatsdPullAtomConfig::mutable_raw_pull_atom_id() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdPullAtomConfig.raw_pull_atom_id)
  return _internal_mutable_raw_pull_atom_id();
}

inline ::int32_t StatsdPullAtomConfig::_internal_raw_pull_atom_id(int index) const {
  return _internal_raw_pull_atom_id().Get(index);
}
inline void StatsdPullAtomConfig::_internal_add_raw_pull_atom_id(::int32_t value) {
  _internal_mutable_raw_pull_atom_id()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>& StatsdPullAtomConfig::_internal_raw_pull_atom_id() const {
  return _impl_.raw_pull_atom_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::int32_t>* StatsdPullAtomConfig::_internal_mutable_raw_pull_atom_id() {
  return &_impl_.raw_pull_atom_id_;
}

// optional int32 pull_frequency_ms = 3;
inline bool StatsdPullAtomConfig::has_pull_frequency_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void StatsdPullAtomConfig::clear_pull_frequency_ms() {
  _impl_.pull_frequency_ms_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int32_t StatsdPullAtomConfig::pull_frequency_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdPullAtomConfig.pull_frequency_ms)
  return _internal_pull_frequency_ms();
}
inline void StatsdPullAtomConfig::set_pull_frequency_ms(::int32_t value) {
  _internal_set_pull_frequency_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdPullAtomConfig.pull_frequency_ms)
}
inline ::int32_t StatsdPullAtomConfig::_internal_pull_frequency_ms() const {
  return _impl_.pull_frequency_ms_;
}
inline void StatsdPullAtomConfig::_internal_set_pull_frequency_ms(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.pull_frequency_ms_ = value;
}

// repeated string packages = 4;
inline int StatsdPullAtomConfig::_internal_packages_size() const {
  return _impl_.packages_.size();
}
inline int StatsdPullAtomConfig::packages_size() const {
  return _internal_packages_size();
}
inline void StatsdPullAtomConfig::clear_packages() {
  _internal_mutable_packages()->Clear();
}
inline std::string* StatsdPullAtomConfig::add_packages() {
  std::string* _s = _internal_add_packages();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.StatsdPullAtomConfig.packages)
  return _s;
}
inline const std::string& StatsdPullAtomConfig::packages(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdPullAtomConfig.packages)
  return _internal_packages(index);
}
inline std::string* StatsdPullAtomConfig::mutable_packages(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.StatsdPullAtomConfig.packages)
  return _internal_mutable_packages()->Mutable(index);
}
inline void StatsdPullAtomConfig::set_packages(int index, const std::string& value) {
  _internal_mutable_packages()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::set_packages(int index, std::string&& value) {
  _internal_mutable_packages()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::set_packages(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_packages()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::set_packages(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_packages()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::set_packages(int index, absl::string_view value) {
  _internal_mutable_packages()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::add_packages(const std::string& value) {
  _internal_mutable_packages()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::add_packages(std::string&& value) {
  _internal_mutable_packages()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::add_packages(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_packages()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::add_packages(const char* value, std::size_t size) {
  _internal_mutable_packages()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline void StatsdPullAtomConfig::add_packages(absl::string_view value) {
  _internal_mutable_packages()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:perfetto.protos.StatsdPullAtomConfig.packages)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
StatsdPullAtomConfig::packages() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdPullAtomConfig.packages)
  return _internal_packages();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* StatsdPullAtomConfig::mutable_packages() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdPullAtomConfig.packages)
  return _internal_mutable_packages();
}
inline const std::string& StatsdPullAtomConfig::_internal_packages(int index) const {
  return _internal_packages().Get(index);
}
inline std::string* StatsdPullAtomConfig::_internal_add_packages() {
  return _internal_mutable_packages()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
StatsdPullAtomConfig::_internal_packages() const {
  return _impl_.packages_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
StatsdPullAtomConfig::_internal_mutable_packages() {
  return &_impl_.packages_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fstatsd_2fstatsd_5ftracing_5fconfig_2eproto_2epb_2eh
