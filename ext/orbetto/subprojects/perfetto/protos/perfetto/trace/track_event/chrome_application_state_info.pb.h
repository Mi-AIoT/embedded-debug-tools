// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_application_state_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto;
namespace perfetto {
namespace protos {
class ChromeApplicationStateInfo;
struct ChromeApplicationStateInfoDefaultTypeInternal;
extern ChromeApplicationStateInfoDefaultTypeInternal _ChromeApplicationStateInfo_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ChromeApplicationStateInfo* Arena::CreateMaybeMessage<::perfetto::protos::ChromeApplicationStateInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum ChromeApplicationStateInfo_ChromeApplicationState : int {
  ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_UNKNOWN = 0,
  ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_RUNNING_ACTIVITIES = 1,
  ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_PAUSED_ACTIVITIES = 2,
  ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_STOPPED_ACTIVITIES = 3,
  ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_DESTROYED_ACTIVITIES = 4,
};

bool ChromeApplicationStateInfo_ChromeApplicationState_IsValid(int value);
constexpr ChromeApplicationStateInfo_ChromeApplicationState ChromeApplicationStateInfo_ChromeApplicationState_ChromeApplicationState_MIN = static_cast<ChromeApplicationStateInfo_ChromeApplicationState>(0);
constexpr ChromeApplicationStateInfo_ChromeApplicationState ChromeApplicationStateInfo_ChromeApplicationState_ChromeApplicationState_MAX = static_cast<ChromeApplicationStateInfo_ChromeApplicationState>(4);
constexpr int ChromeApplicationStateInfo_ChromeApplicationState_ChromeApplicationState_ARRAYSIZE = 4 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
ChromeApplicationStateInfo_ChromeApplicationState_descriptor();
template <typename T>
const std::string& ChromeApplicationStateInfo_ChromeApplicationState_Name(T value) {
  static_assert(std::is_same<T, ChromeApplicationStateInfo_ChromeApplicationState>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ChromeApplicationState_Name().");
  return ChromeApplicationStateInfo_ChromeApplicationState_Name(static_cast<ChromeApplicationStateInfo_ChromeApplicationState>(value));
}
template <>
inline const std::string& ChromeApplicationStateInfo_ChromeApplicationState_Name(ChromeApplicationStateInfo_ChromeApplicationState value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<ChromeApplicationStateInfo_ChromeApplicationState_descriptor,
                                                 0, 4>(
      static_cast<int>(value));
}
inline bool ChromeApplicationStateInfo_ChromeApplicationState_Parse(absl::string_view name, ChromeApplicationStateInfo_ChromeApplicationState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChromeApplicationStateInfo_ChromeApplicationState>(
      ChromeApplicationStateInfo_ChromeApplicationState_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class ChromeApplicationStateInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeApplicationStateInfo) */ {
 public:
  inline ChromeApplicationStateInfo() : ChromeApplicationStateInfo(nullptr) {}
  ~ChromeApplicationStateInfo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ChromeApplicationStateInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeApplicationStateInfo(const ChromeApplicationStateInfo& from);
  ChromeApplicationStateInfo(ChromeApplicationStateInfo&& from) noexcept
    : ChromeApplicationStateInfo() {
    *this = ::std::move(from);
  }

  inline ChromeApplicationStateInfo& operator=(const ChromeApplicationStateInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeApplicationStateInfo& operator=(ChromeApplicationStateInfo&& from) noexcept {
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
  static const ChromeApplicationStateInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeApplicationStateInfo* internal_default_instance() {
    return reinterpret_cast<const ChromeApplicationStateInfo*>(
               &_ChromeApplicationStateInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeApplicationStateInfo& a, ChromeApplicationStateInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeApplicationStateInfo* other) {
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
  void UnsafeArenaSwap(ChromeApplicationStateInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeApplicationStateInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeApplicationStateInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChromeApplicationStateInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChromeApplicationStateInfo& from) {
    ChromeApplicationStateInfo::MergeImpl(*this, from);
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
  void InternalSwap(ChromeApplicationStateInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ChromeApplicationStateInfo";
  }
  protected:
  explicit ChromeApplicationStateInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using ChromeApplicationState = ChromeApplicationStateInfo_ChromeApplicationState;
  static constexpr ChromeApplicationState APPLICATION_STATE_UNKNOWN = ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_UNKNOWN;
  static constexpr ChromeApplicationState APPLICATION_STATE_HAS_RUNNING_ACTIVITIES = ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_RUNNING_ACTIVITIES;
  static constexpr ChromeApplicationState APPLICATION_STATE_HAS_PAUSED_ACTIVITIES = ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_PAUSED_ACTIVITIES;
  static constexpr ChromeApplicationState APPLICATION_STATE_HAS_STOPPED_ACTIVITIES = ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_STOPPED_ACTIVITIES;
  static constexpr ChromeApplicationState APPLICATION_STATE_HAS_DESTROYED_ACTIVITIES = ChromeApplicationStateInfo_ChromeApplicationState_APPLICATION_STATE_HAS_DESTROYED_ACTIVITIES;
  static inline bool ChromeApplicationState_IsValid(int value) {
    return ChromeApplicationStateInfo_ChromeApplicationState_IsValid(value);
  }
  static constexpr ChromeApplicationState ChromeApplicationState_MIN = ChromeApplicationStateInfo_ChromeApplicationState_ChromeApplicationState_MIN;
  static constexpr ChromeApplicationState ChromeApplicationState_MAX = ChromeApplicationStateInfo_ChromeApplicationState_ChromeApplicationState_MAX;
  static constexpr int ChromeApplicationState_ARRAYSIZE = ChromeApplicationStateInfo_ChromeApplicationState_ChromeApplicationState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeApplicationState_descriptor() {
    return ChromeApplicationStateInfo_ChromeApplicationState_descriptor();
  }
  template <typename T>
  static inline const std::string& ChromeApplicationState_Name(T value) {
    return ChromeApplicationStateInfo_ChromeApplicationState_Name(value);
  }
  static inline bool ChromeApplicationState_Parse(absl::string_view name, ChromeApplicationState* value) {
    return ChromeApplicationStateInfo_ChromeApplicationState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kApplicationStateFieldNumber = 1,
  };
  // optional .perfetto.protos.ChromeApplicationStateInfo.ChromeApplicationState application_state = 1;
  bool has_application_state() const;
  void clear_application_state() ;
  ::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState application_state() const;
  void set_application_state(::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState value);

  private:
  ::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState _internal_application_state() const;
  void _internal_set_application_state(::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeApplicationStateInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int application_state_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ChromeApplicationStateInfo

// optional .perfetto.protos.ChromeApplicationStateInfo.ChromeApplicationState application_state = 1;
inline bool ChromeApplicationStateInfo::has_application_state() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ChromeApplicationStateInfo::clear_application_state() {
  _impl_.application_state_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState ChromeApplicationStateInfo::application_state() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeApplicationStateInfo.application_state)
  return _internal_application_state();
}
inline void ChromeApplicationStateInfo::set_application_state(::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState value) {
   _internal_set_application_state(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeApplicationStateInfo.application_state)
}
inline ::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState ChromeApplicationStateInfo::_internal_application_state() const {
  return static_cast<::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState>(_impl_.application_state_);
}
inline void ChromeApplicationStateInfo::_internal_set_application_state(::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState value) {
  assert(::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.application_state_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState>() {
  return ::perfetto::protos::ChromeApplicationStateInfo_ChromeApplicationState_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fapplication_5fstate_5finfo_2eproto_2epb_2eh
