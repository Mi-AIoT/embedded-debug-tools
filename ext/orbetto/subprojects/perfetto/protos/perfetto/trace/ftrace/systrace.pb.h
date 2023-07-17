// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/systrace.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto;
namespace perfetto {
namespace protos {
class ZeroFtraceEvent;
struct ZeroFtraceEventDefaultTypeInternal;
extern ZeroFtraceEventDefaultTypeInternal _ZeroFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ZeroFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::ZeroFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class ZeroFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ZeroFtraceEvent) */ {
 public:
  inline ZeroFtraceEvent() : ZeroFtraceEvent(nullptr) {}
  ~ZeroFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ZeroFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZeroFtraceEvent(const ZeroFtraceEvent& from);
  ZeroFtraceEvent(ZeroFtraceEvent&& from) noexcept
    : ZeroFtraceEvent() {
    *this = ::std::move(from);
  }

  inline ZeroFtraceEvent& operator=(const ZeroFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZeroFtraceEvent& operator=(ZeroFtraceEvent&& from) noexcept {
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
  static const ZeroFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZeroFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const ZeroFtraceEvent*>(
               &_ZeroFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZeroFtraceEvent& a, ZeroFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(ZeroFtraceEvent* other) {
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
  void UnsafeArenaSwap(ZeroFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZeroFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZeroFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZeroFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZeroFtraceEvent& from) {
    ZeroFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(ZeroFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ZeroFtraceEvent";
  }
  protected:
  explicit ZeroFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kFlagFieldNumber = 1,
    kPidFieldNumber = 3,
    kValueFieldNumber = 4,
  };
  // optional string name = 2;
  bool has_name() const;
  void clear_name() ;
  const std::string& name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* ptr);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // optional int32 flag = 1;
  bool has_flag() const;
  void clear_flag() ;
  ::int32_t flag() const;
  void set_flag(::int32_t value);

  private:
  ::int32_t _internal_flag() const;
  void _internal_set_flag(::int32_t value);

  public:
  // optional int32 pid = 3;
  bool has_pid() const;
  void clear_pid() ;
  ::int32_t pid() const;
  void set_pid(::int32_t value);

  private:
  ::int32_t _internal_pid() const;
  void _internal_set_pid(::int32_t value);

  public:
  // optional int64 value = 4;
  bool has_value() const;
  void clear_value() ;
  ::int64_t value() const;
  void set_value(::int64_t value);

  private:
  ::int64_t _internal_value() const;
  void _internal_set_value(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ZeroFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::int32_t flag_;
    ::int32_t pid_;
    ::int64_t value_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ZeroFtraceEvent

// optional int32 flag = 1;
inline bool ZeroFtraceEvent::has_flag() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ZeroFtraceEvent::clear_flag() {
  _impl_.flag_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t ZeroFtraceEvent::flag() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ZeroFtraceEvent.flag)
  return _internal_flag();
}
inline void ZeroFtraceEvent::set_flag(::int32_t value) {
  _internal_set_flag(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ZeroFtraceEvent.flag)
}
inline ::int32_t ZeroFtraceEvent::_internal_flag() const {
  return _impl_.flag_;
}
inline void ZeroFtraceEvent::_internal_set_flag(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.flag_ = value;
}

// optional string name = 2;
inline bool ZeroFtraceEvent::has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ZeroFtraceEvent::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ZeroFtraceEvent::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ZeroFtraceEvent.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ZeroFtraceEvent::set_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ZeroFtraceEvent.name)
}
inline std::string* ZeroFtraceEvent::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ZeroFtraceEvent.name)
  return _s;
}
inline const std::string& ZeroFtraceEvent::_internal_name() const {
  return _impl_.name_.Get();
}
inline void ZeroFtraceEvent::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* ZeroFtraceEvent::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable( GetArenaForAllocation());
}
inline std::string* ZeroFtraceEvent::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ZeroFtraceEvent.name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ZeroFtraceEvent::set_allocated_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ZeroFtraceEvent.name)
}

// optional int32 pid = 3;
inline bool ZeroFtraceEvent::has_pid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void ZeroFtraceEvent::clear_pid() {
  _impl_.pid_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t ZeroFtraceEvent::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ZeroFtraceEvent.pid)
  return _internal_pid();
}
inline void ZeroFtraceEvent::set_pid(::int32_t value) {
  _internal_set_pid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ZeroFtraceEvent.pid)
}
inline ::int32_t ZeroFtraceEvent::_internal_pid() const {
  return _impl_.pid_;
}
inline void ZeroFtraceEvent::_internal_set_pid(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.pid_ = value;
}

// optional int64 value = 4;
inline bool ZeroFtraceEvent::has_value() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void ZeroFtraceEvent::clear_value() {
  _impl_.value_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int64_t ZeroFtraceEvent::value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ZeroFtraceEvent.value)
  return _internal_value();
}
inline void ZeroFtraceEvent::set_value(::int64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ZeroFtraceEvent.value)
}
inline ::int64_t ZeroFtraceEvent::_internal_value() const {
  return _impl_.value_;
}
inline void ZeroFtraceEvent::_internal_set_value(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.value_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsystrace_2eproto_2epb_2eh
