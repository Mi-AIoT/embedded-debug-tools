// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/gpu/gpu_counter_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto_2epb_2eh

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
#include "protos/perfetto/common/gpu_counter_descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto;
namespace perfetto {
namespace protos {
class GpuCounterEvent;
struct GpuCounterEventDefaultTypeInternal;
extern GpuCounterEventDefaultTypeInternal _GpuCounterEvent_default_instance_;
class GpuCounterEvent_GpuCounter;
struct GpuCounterEvent_GpuCounterDefaultTypeInternal;
extern GpuCounterEvent_GpuCounterDefaultTypeInternal _GpuCounterEvent_GpuCounter_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::GpuCounterEvent* Arena::CreateMaybeMessage<::perfetto::protos::GpuCounterEvent>(Arena*);
template <>
::perfetto::protos::GpuCounterEvent_GpuCounter* Arena::CreateMaybeMessage<::perfetto::protos::GpuCounterEvent_GpuCounter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class GpuCounterEvent_GpuCounter final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.GpuCounterEvent.GpuCounter) */ {
 public:
  inline GpuCounterEvent_GpuCounter() : GpuCounterEvent_GpuCounter(nullptr) {}
  ~GpuCounterEvent_GpuCounter() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GpuCounterEvent_GpuCounter(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GpuCounterEvent_GpuCounter(const GpuCounterEvent_GpuCounter& from);
  GpuCounterEvent_GpuCounter(GpuCounterEvent_GpuCounter&& from) noexcept
    : GpuCounterEvent_GpuCounter() {
    *this = ::std::move(from);
  }

  inline GpuCounterEvent_GpuCounter& operator=(const GpuCounterEvent_GpuCounter& from) {
    CopyFrom(from);
    return *this;
  }
  inline GpuCounterEvent_GpuCounter& operator=(GpuCounterEvent_GpuCounter&& from) noexcept {
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
  static const GpuCounterEvent_GpuCounter& default_instance() {
    return *internal_default_instance();
  }
  enum ValueCase {
    kIntValue = 2,
    kDoubleValue = 3,
    VALUE_NOT_SET = 0,
  };

  static inline const GpuCounterEvent_GpuCounter* internal_default_instance() {
    return reinterpret_cast<const GpuCounterEvent_GpuCounter*>(
               &_GpuCounterEvent_GpuCounter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GpuCounterEvent_GpuCounter& a, GpuCounterEvent_GpuCounter& b) {
    a.Swap(&b);
  }
  inline void Swap(GpuCounterEvent_GpuCounter* other) {
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
  void UnsafeArenaSwap(GpuCounterEvent_GpuCounter* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GpuCounterEvent_GpuCounter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GpuCounterEvent_GpuCounter>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GpuCounterEvent_GpuCounter& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GpuCounterEvent_GpuCounter& from) {
    GpuCounterEvent_GpuCounter::MergeImpl(*this, from);
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
  void InternalSwap(GpuCounterEvent_GpuCounter* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.GpuCounterEvent.GpuCounter";
  }
  protected:
  explicit GpuCounterEvent_GpuCounter(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCounterIdFieldNumber = 1,
    kIntValueFieldNumber = 2,
    kDoubleValueFieldNumber = 3,
  };
  // optional uint32 counter_id = 1;
  bool has_counter_id() const;
  void clear_counter_id() ;
  ::uint32_t counter_id() const;
  void set_counter_id(::uint32_t value);

  private:
  ::uint32_t _internal_counter_id() const;
  void _internal_set_counter_id(::uint32_t value);

  public:
  // int64 int_value = 2;
  bool has_int_value() const;
  void clear_int_value() ;
  ::int64_t int_value() const;
  void set_int_value(::int64_t value);

  private:
  ::int64_t _internal_int_value() const;
  void _internal_set_int_value(::int64_t value);

  public:
  // double double_value = 3;
  bool has_double_value() const;
  void clear_double_value() ;
  double double_value() const;
  void set_double_value(double value);

  private:
  double _internal_double_value() const;
  void _internal_set_double_value(double value);

  public:
  void clear_value();
  ValueCase value_case() const;
  // @@protoc_insertion_point(class_scope:perfetto.protos.GpuCounterEvent.GpuCounter)
 private:
  class _Internal;
  void set_has_int_value();
  void set_has_double_value();

  inline bool has_value() const;
  inline void clear_has_value();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t counter_id_;
    union ValueUnion {
      constexpr ValueUnion() : _constinit_{} {}
        ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
      ::int64_t int_value_;
      double double_value_;
    } value_;
    ::uint32_t _oneof_case_[1];

  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto;
};// -------------------------------------------------------------------

class GpuCounterEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.GpuCounterEvent) */ {
 public:
  inline GpuCounterEvent() : GpuCounterEvent(nullptr) {}
  ~GpuCounterEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GpuCounterEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GpuCounterEvent(const GpuCounterEvent& from);
  GpuCounterEvent(GpuCounterEvent&& from) noexcept
    : GpuCounterEvent() {
    *this = ::std::move(from);
  }

  inline GpuCounterEvent& operator=(const GpuCounterEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline GpuCounterEvent& operator=(GpuCounterEvent&& from) noexcept {
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
  static const GpuCounterEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const GpuCounterEvent* internal_default_instance() {
    return reinterpret_cast<const GpuCounterEvent*>(
               &_GpuCounterEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GpuCounterEvent& a, GpuCounterEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(GpuCounterEvent* other) {
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
  void UnsafeArenaSwap(GpuCounterEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GpuCounterEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GpuCounterEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GpuCounterEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GpuCounterEvent& from) {
    GpuCounterEvent::MergeImpl(*this, from);
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
  void InternalSwap(GpuCounterEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.GpuCounterEvent";
  }
  protected:
  explicit GpuCounterEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef GpuCounterEvent_GpuCounter GpuCounter;

  // accessors -------------------------------------------------------

  enum : int {
    kCountersFieldNumber = 2,
    kCounterDescriptorFieldNumber = 1,
    kGpuIdFieldNumber = 3,
  };
  // repeated .perfetto.protos.GpuCounterEvent.GpuCounter counters = 2;
  int counters_size() const;
  private:
  int _internal_counters_size() const;

  public:
  void clear_counters() ;
  ::perfetto::protos::GpuCounterEvent_GpuCounter* mutable_counters(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GpuCounterEvent_GpuCounter >*
      mutable_counters();
  private:
  const ::perfetto::protos::GpuCounterEvent_GpuCounter& _internal_counters(int index) const;
  ::perfetto::protos::GpuCounterEvent_GpuCounter* _internal_add_counters();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GpuCounterEvent_GpuCounter>& _internal_counters() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GpuCounterEvent_GpuCounter>* _internal_mutable_counters();
  public:
  const ::perfetto::protos::GpuCounterEvent_GpuCounter& counters(int index) const;
  ::perfetto::protos::GpuCounterEvent_GpuCounter* add_counters();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GpuCounterEvent_GpuCounter >&
      counters() const;
  // optional .perfetto.protos.GpuCounterDescriptor counter_descriptor = 1;
  bool has_counter_descriptor() const;
  void clear_counter_descriptor() ;
  const ::perfetto::protos::GpuCounterDescriptor& counter_descriptor() const;
  PROTOBUF_NODISCARD ::perfetto::protos::GpuCounterDescriptor* release_counter_descriptor();
  ::perfetto::protos::GpuCounterDescriptor* mutable_counter_descriptor();
  void set_allocated_counter_descriptor(::perfetto::protos::GpuCounterDescriptor* counter_descriptor);
  private:
  const ::perfetto::protos::GpuCounterDescriptor& _internal_counter_descriptor() const;
  ::perfetto::protos::GpuCounterDescriptor* _internal_mutable_counter_descriptor();
  public:
  void unsafe_arena_set_allocated_counter_descriptor(
      ::perfetto::protos::GpuCounterDescriptor* counter_descriptor);
  ::perfetto::protos::GpuCounterDescriptor* unsafe_arena_release_counter_descriptor();
  // optional int32 gpu_id = 3;
  bool has_gpu_id() const;
  void clear_gpu_id() ;
  ::int32_t gpu_id() const;
  void set_gpu_id(::int32_t value);

  private:
  ::int32_t _internal_gpu_id() const;
  void _internal_set_gpu_id(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.GpuCounterEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GpuCounterEvent_GpuCounter > counters_;
    ::perfetto::protos::GpuCounterDescriptor* counter_descriptor_;
    ::int32_t gpu_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// GpuCounterEvent_GpuCounter

// optional uint32 counter_id = 1;
inline bool GpuCounterEvent_GpuCounter::has_counter_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void GpuCounterEvent_GpuCounter::clear_counter_id() {
  _impl_.counter_id_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t GpuCounterEvent_GpuCounter::counter_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterEvent.GpuCounter.counter_id)
  return _internal_counter_id();
}
inline void GpuCounterEvent_GpuCounter::set_counter_id(::uint32_t value) {
  _internal_set_counter_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterEvent.GpuCounter.counter_id)
}
inline ::uint32_t GpuCounterEvent_GpuCounter::_internal_counter_id() const {
  return _impl_.counter_id_;
}
inline void GpuCounterEvent_GpuCounter::_internal_set_counter_id(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.counter_id_ = value;
}

// int64 int_value = 2;
inline bool GpuCounterEvent_GpuCounter::has_int_value() const {
  return value_case() == kIntValue;
}
inline void GpuCounterEvent_GpuCounter::set_has_int_value() {
  _impl_._oneof_case_[0] = kIntValue;
}
inline void GpuCounterEvent_GpuCounter::clear_int_value() {
  if (value_case() == kIntValue) {
    _impl_.value_.int_value_ = ::int64_t{0};
    clear_has_value();
  }
}
inline ::int64_t GpuCounterEvent_GpuCounter::int_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterEvent.GpuCounter.int_value)
  return _internal_int_value();
}
inline void GpuCounterEvent_GpuCounter::set_int_value(::int64_t value) {
  _internal_set_int_value(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterEvent.GpuCounter.int_value)
}
inline ::int64_t GpuCounterEvent_GpuCounter::_internal_int_value() const {
  if (value_case() == kIntValue) {
    return _impl_.value_.int_value_;
  }
  return ::int64_t{0};
}
inline void GpuCounterEvent_GpuCounter::_internal_set_int_value(::int64_t value) {
  if (value_case() != kIntValue) {
    clear_value();
    set_has_int_value();
  }
  _impl_.value_.int_value_ = value;
}

// double double_value = 3;
inline bool GpuCounterEvent_GpuCounter::has_double_value() const {
  return value_case() == kDoubleValue;
}
inline void GpuCounterEvent_GpuCounter::set_has_double_value() {
  _impl_._oneof_case_[0] = kDoubleValue;
}
inline void GpuCounterEvent_GpuCounter::clear_double_value() {
  if (value_case() == kDoubleValue) {
    _impl_.value_.double_value_ = 0;
    clear_has_value();
  }
}
inline double GpuCounterEvent_GpuCounter::double_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterEvent.GpuCounter.double_value)
  return _internal_double_value();
}
inline void GpuCounterEvent_GpuCounter::set_double_value(double value) {
  _internal_set_double_value(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterEvent.GpuCounter.double_value)
}
inline double GpuCounterEvent_GpuCounter::_internal_double_value() const {
  if (value_case() == kDoubleValue) {
    return _impl_.value_.double_value_;
  }
  return 0;
}
inline void GpuCounterEvent_GpuCounter::_internal_set_double_value(double value) {
  if (value_case() != kDoubleValue) {
    clear_value();
    set_has_double_value();
  }
  _impl_.value_.double_value_ = value;
}

inline bool GpuCounterEvent_GpuCounter::has_value() const {
  return value_case() != VALUE_NOT_SET;
}
inline void GpuCounterEvent_GpuCounter::clear_has_value() {
  _impl_._oneof_case_[0] = VALUE_NOT_SET;
}
inline GpuCounterEvent_GpuCounter::ValueCase GpuCounterEvent_GpuCounter::value_case() const {
  return GpuCounterEvent_GpuCounter::ValueCase(_impl_._oneof_case_[0]);
}
// -------------------------------------------------------------------

// GpuCounterEvent

// optional .perfetto.protos.GpuCounterDescriptor counter_descriptor = 1;
inline bool GpuCounterEvent::has_counter_descriptor() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.counter_descriptor_ != nullptr);
  return value;
}
inline const ::perfetto::protos::GpuCounterDescriptor& GpuCounterEvent::_internal_counter_descriptor() const {
  const ::perfetto::protos::GpuCounterDescriptor* p = _impl_.counter_descriptor_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::GpuCounterDescriptor&>(
      ::perfetto::protos::_GpuCounterDescriptor_default_instance_);
}
inline const ::perfetto::protos::GpuCounterDescriptor& GpuCounterEvent::counter_descriptor() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterEvent.counter_descriptor)
  return _internal_counter_descriptor();
}
inline void GpuCounterEvent::unsafe_arena_set_allocated_counter_descriptor(
    ::perfetto::protos::GpuCounterDescriptor* counter_descriptor) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.counter_descriptor_);
  }
  _impl_.counter_descriptor_ = counter_descriptor;
  if (counter_descriptor) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.GpuCounterEvent.counter_descriptor)
}
inline ::perfetto::protos::GpuCounterDescriptor* GpuCounterEvent::release_counter_descriptor() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::GpuCounterDescriptor* temp = _impl_.counter_descriptor_;
  _impl_.counter_descriptor_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::GpuCounterDescriptor* GpuCounterEvent::unsafe_arena_release_counter_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.GpuCounterEvent.counter_descriptor)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::GpuCounterDescriptor* temp = _impl_.counter_descriptor_;
  _impl_.counter_descriptor_ = nullptr;
  return temp;
}
inline ::perfetto::protos::GpuCounterDescriptor* GpuCounterEvent::_internal_mutable_counter_descriptor() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.counter_descriptor_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::GpuCounterDescriptor>(GetArenaForAllocation());
    _impl_.counter_descriptor_ = p;
  }
  return _impl_.counter_descriptor_;
}
inline ::perfetto::protos::GpuCounterDescriptor* GpuCounterEvent::mutable_counter_descriptor() {
  ::perfetto::protos::GpuCounterDescriptor* _msg = _internal_mutable_counter_descriptor();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GpuCounterEvent.counter_descriptor)
  return _msg;
}
inline void GpuCounterEvent::set_allocated_counter_descriptor(::perfetto::protos::GpuCounterDescriptor* counter_descriptor) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.counter_descriptor_);
  }
  if (counter_descriptor) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(counter_descriptor));
    if (message_arena != submessage_arena) {
      counter_descriptor = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, counter_descriptor, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.counter_descriptor_ = counter_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.GpuCounterEvent.counter_descriptor)
}

// repeated .perfetto.protos.GpuCounterEvent.GpuCounter counters = 2;
inline int GpuCounterEvent::_internal_counters_size() const {
  return _impl_.counters_.size();
}
inline int GpuCounterEvent::counters_size() const {
  return _internal_counters_size();
}
inline void GpuCounterEvent::clear_counters() {
  _internal_mutable_counters()->Clear();
}
inline ::perfetto::protos::GpuCounterEvent_GpuCounter* GpuCounterEvent::mutable_counters(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.GpuCounterEvent.counters)
  return _internal_mutable_counters()->Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GpuCounterEvent_GpuCounter >*
GpuCounterEvent::mutable_counters() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.GpuCounterEvent.counters)
  return _internal_mutable_counters();
}
inline const ::perfetto::protos::GpuCounterEvent_GpuCounter& GpuCounterEvent::_internal_counters(int index) const {
  return _internal_counters().Get(index);
}
inline const ::perfetto::protos::GpuCounterEvent_GpuCounter& GpuCounterEvent::counters(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterEvent.counters)
  return _internal_counters(index);
}
inline ::perfetto::protos::GpuCounterEvent_GpuCounter* GpuCounterEvent::_internal_add_counters() {
  return _internal_mutable_counters()->Add();
}
inline ::perfetto::protos::GpuCounterEvent_GpuCounter* GpuCounterEvent::add_counters() {
  ::perfetto::protos::GpuCounterEvent_GpuCounter* _add = _internal_add_counters();
  // @@protoc_insertion_point(field_add:perfetto.protos.GpuCounterEvent.counters)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::GpuCounterEvent_GpuCounter >&
GpuCounterEvent::counters() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.GpuCounterEvent.counters)
  return _internal_counters();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GpuCounterEvent_GpuCounter>&
GpuCounterEvent::_internal_counters() const {
  return _impl_.counters_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<::perfetto::protos::GpuCounterEvent_GpuCounter>*
GpuCounterEvent::_internal_mutable_counters() {
  return &_impl_.counters_;
}

// optional int32 gpu_id = 3;
inline bool GpuCounterEvent::has_gpu_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void GpuCounterEvent::clear_gpu_id() {
  _impl_.gpu_id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t GpuCounterEvent::gpu_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuCounterEvent.gpu_id)
  return _internal_gpu_id();
}
inline void GpuCounterEvent::set_gpu_id(::int32_t value) {
  _internal_set_gpu_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuCounterEvent.gpu_id)
}
inline ::int32_t GpuCounterEvent::_internal_gpu_id() const {
  return _impl_.gpu_id_;
}
inline void GpuCounterEvent::_internal_set_gpu_id(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.gpu_id_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5fcounter_5fevent_2eproto_2epb_2eh
