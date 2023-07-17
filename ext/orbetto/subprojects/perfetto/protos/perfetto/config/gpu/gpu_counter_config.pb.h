// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/gpu/gpu_counter_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto;
namespace perfetto {
namespace protos {
class GpuCounterConfig;
struct GpuCounterConfigDefaultTypeInternal;
extern GpuCounterConfigDefaultTypeInternal _GpuCounterConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::GpuCounterConfig* Arena::CreateMaybeMessage<::perfetto::protos::GpuCounterConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class GpuCounterConfig final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.GpuCounterConfig) */ {
 public:
  inline GpuCounterConfig() : GpuCounterConfig(nullptr) {}
  ~GpuCounterConfig() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GpuCounterConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GpuCounterConfig(const GpuCounterConfig& from);
  GpuCounterConfig(GpuCounterConfig&& from) noexcept
    : GpuCounterConfig() {
    *this = ::std::move(from);
  }

  inline GpuCounterConfig& operator=(const GpuCounterConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline GpuCounterConfig& operator=(GpuCounterConfig&& from) noexcept {
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
  static const GpuCounterConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const GpuCounterConfig* internal_default_instance() {
    return reinterpret_cast<const GpuCounterConfig*>(
               &_GpuCounterConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GpuCounterConfig& a, GpuCounterConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(GpuCounterConfig* other) {
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
  void UnsafeArenaSwap(GpuCounterConfig* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GpuCounterConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GpuCounterConfig>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GpuCounterConfig& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GpuCounterConfig& from) {
    GpuCounterConfig::MergeImpl(*this, from);
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
  void InternalSwap(GpuCounterConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.GpuCounterConfig";
  }
  protected:
  explicit GpuCounterConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCounterIdsFieldNumber = 2,
    kCounterPeriodNsFieldNumber = 1,
    kInstrumentedSamplingFieldNumber = 3,
    kFixGpuClockFieldNumber = 4,
  };
  // repeated uint32 counter_ids = 2;
  int counter_ids_size() const;
  private:
  int _internal_counter_ids_size() const;

  public:
  void clear_counter_ids() ;
  ::uint32_t counter_ids(int index) const;
  void set_counter_ids(int index, ::uint32_t value);
  void add_counter_ids(::uint32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>& counter_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>* mutable_counter_ids();

  private:
  ::uint32_t _internal_counter_ids(int index) const;
  void _internal_add_counter_ids(::uint32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>& _internal_counter_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>* _internal_mutable_counter_ids();

  public:
  // optional uint64 counter_period_ns = 1;
  bool has_counter_period_ns() const;
  void clear_counter_period_ns() ;
  ::uint64_t counter_period_ns() const;
  void set_counter_period_ns(::uint64_t value);

  private:
  ::uint64_t _internal_counter_period_ns() const;
  void _internal_set_counter_period_ns(::uint64_t value);

  public:
  // optional bool instrumented_sampling = 3;
  bool has_instrumented_sampling() const;
  void clear_instrumented_sampling() ;
  bool instrumented_sampling() const;
  void set_instrumented_sampling(bool value);

  private:
  bool _internal_instrumented_sampling() const;
  void _internal_set_instrumented_sampling(bool value);

  public:
  // optional bool fix_gpu_clock = 4;
  bool has_fix_gpu_clock() const;
  void clear_fix_gpu_clock() ;
  bool fix_gpu_clock() const;
  void set_fix_gpu_clock(bool value);

  private:
  bool _internal_fix_gpu_clock() const;
  void _internal_set_fix_gpu_clock(bool value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.GpuCounterConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t> counter_ids_;
    ::uint64_t counter_period_ns_;
    bool instrumented_sampling_;
    bool fix_gpu_clock_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GpuCounterConfig

// optional uint64 counter_period_ns = 1;
inline bool GpuCounterConfig::has_counter_period_ns() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GpuCounterConfig::clear_counter_period_ns() {
  _impl_.counter_period_ns_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t GpuCounterConfig::counter_period_ns() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterConfig.counter_period_ns)
  return _internal_counter_period_ns();
}
inline void GpuCounterConfig::set_counter_period_ns(::uint64_t value) {
  _internal_set_counter_period_ns(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterConfig.counter_period_ns)
}
inline ::uint64_t GpuCounterConfig::_internal_counter_period_ns() const {
  return _impl_.counter_period_ns_;
}
inline void GpuCounterConfig::_internal_set_counter_period_ns(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.counter_period_ns_ = value;
}

// repeated uint32 counter_ids = 2;
inline int GpuCounterConfig::_internal_counter_ids_size() const {
  return _impl_.counter_ids_.size();
}
inline int GpuCounterConfig::counter_ids_size() const {
  return _internal_counter_ids_size();
}
inline void GpuCounterConfig::clear_counter_ids() {
  _internal_mutable_counter_ids()->Clear();
}
inline ::uint32_t GpuCounterConfig::counter_ids(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterConfig.counter_ids)
  return _internal_counter_ids(index);
}
inline void GpuCounterConfig::set_counter_ids(int index, ::uint32_t value) {
  _internal_mutable_counter_ids()->Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterConfig.counter_ids)
}
inline void GpuCounterConfig::add_counter_ids(::uint32_t value) {
  _internal_add_counter_ids(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.GpuCounterConfig.counter_ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>& GpuCounterConfig::counter_ids() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.GpuCounterConfig.counter_ids)
  return _internal_counter_ids();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>* GpuCounterConfig::mutable_counter_ids() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.GpuCounterConfig.counter_ids)
  return _internal_mutable_counter_ids();
}

inline ::uint32_t GpuCounterConfig::_internal_counter_ids(int index) const {
  return _internal_counter_ids().Get(index);
}
inline void GpuCounterConfig::_internal_add_counter_ids(::uint32_t value) {
  _internal_mutable_counter_ids()->Add(value);
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>& GpuCounterConfig::_internal_counter_ids() const {
  return _impl_.counter_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<::uint32_t>* GpuCounterConfig::_internal_mutable_counter_ids() {
  return &_impl_.counter_ids_;
}

// optional bool instrumented_sampling = 3;
inline bool GpuCounterConfig::has_instrumented_sampling() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void GpuCounterConfig::clear_instrumented_sampling() {
  _impl_.instrumented_sampling_ = false;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool GpuCounterConfig::instrumented_sampling() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterConfig.instrumented_sampling)
  return _internal_instrumented_sampling();
}
inline void GpuCounterConfig::set_instrumented_sampling(bool value) {
  _internal_set_instrumented_sampling(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterConfig.instrumented_sampling)
}
inline bool GpuCounterConfig::_internal_instrumented_sampling() const {
  return _impl_.instrumented_sampling_;
}
inline void GpuCounterConfig::_internal_set_instrumented_sampling(bool value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.instrumented_sampling_ = value;
}

// optional bool fix_gpu_clock = 4;
inline bool GpuCounterConfig::has_fix_gpu_clock() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void GpuCounterConfig::clear_fix_gpu_clock() {
  _impl_.fix_gpu_clock_ = false;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool GpuCounterConfig::fix_gpu_clock() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterConfig.fix_gpu_clock)
  return _internal_fix_gpu_clock();
}
inline void GpuCounterConfig::set_fix_gpu_clock(bool value) {
  _internal_set_fix_gpu_clock(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterConfig.fix_gpu_clock)
}
inline bool GpuCounterConfig::_internal_fix_gpu_clock() const {
  return _impl_.fix_gpu_clock_;
}
inline void GpuCounterConfig::_internal_set_fix_gpu_clock(bool value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.fix_gpu_clock_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fgpu_2fgpu_5fcounter_5fconfig_2eproto_2epb_2eh
