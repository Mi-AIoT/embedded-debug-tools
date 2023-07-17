// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_thread_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto;
namespace perfetto {
namespace protos {
class ChromeThreadDescriptor;
struct ChromeThreadDescriptorDefaultTypeInternal;
extern ChromeThreadDescriptorDefaultTypeInternal _ChromeThreadDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ChromeThreadDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::ChromeThreadDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum ChromeThreadDescriptor_ThreadType : int {
  ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED = 0,
  ChromeThreadDescriptor_ThreadType_THREAD_MAIN = 1,
  ChromeThreadDescriptor_ThreadType_THREAD_IO = 2,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_WORKER = 3,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_WORKER = 4,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_BLOCKING = 5,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_BLOCKING = 6,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_SERVICE = 7,
  ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR = 8,
  ChromeThreadDescriptor_ThreadType_THREAD_VIZ_COMPOSITOR = 9,
  ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR_WORKER = 10,
  ChromeThreadDescriptor_ThreadType_THREAD_SERVICE_WORKER = 11,
  ChromeThreadDescriptor_ThreadType_THREAD_NETWORK_SERVICE = 12,
  ChromeThreadDescriptor_ThreadType_THREAD_CHILD_IO = 13,
  ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_IO = 14,
  ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_MAIN = 15,
  ChromeThreadDescriptor_ThreadType_THREAD_RENDERER_MAIN = 16,
  ChromeThreadDescriptor_ThreadType_THREAD_UTILITY_MAIN = 17,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_MAIN = 18,
  ChromeThreadDescriptor_ThreadType_THREAD_CACHE_BLOCKFILE = 19,
  ChromeThreadDescriptor_ThreadType_THREAD_MEDIA = 20,
  ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_OUTPUTDEVICE = 21,
  ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_INPUTDEVICE = 22,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_MEMORY = 23,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_VSYNC = 24,
  ChromeThreadDescriptor_ThreadType_THREAD_DXA_VIDEODECODER = 25,
  ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_WATCHDOG = 26,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_NETWORK = 27,
  ChromeThreadDescriptor_ThreadType_THREAD_WINDOW_OWNER = 28,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_SIGNALING = 29,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_WORKER = 30,
  ChromeThreadDescriptor_ThreadType_THREAD_PPAPI_MAIN = 31,
  ChromeThreadDescriptor_ThreadType_THREAD_GPU_WATCHDOG = 32,
  ChromeThreadDescriptor_ThreadType_THREAD_SWAPPER = 33,
  ChromeThreadDescriptor_ThreadType_THREAD_GAMEPAD_POLLING = 34,
  ChromeThreadDescriptor_ThreadType_THREAD_WEBCRYPTO = 35,
  ChromeThreadDescriptor_ThreadType_THREAD_DATABASE = 36,
  ChromeThreadDescriptor_ThreadType_THREAD_PROXYRESOLVER = 37,
  ChromeThreadDescriptor_ThreadType_THREAD_DEVTOOLSADB = 38,
  ChromeThreadDescriptor_ThreadType_THREAD_NETWORKCONFIGWATCHER = 39,
  ChromeThreadDescriptor_ThreadType_THREAD_WASAPI_RENDER = 40,
  ChromeThreadDescriptor_ThreadType_THREAD_LOADER_LOCK_SAMPLER = 41,
  ChromeThreadDescriptor_ThreadType_THREAD_MEMORY_INFRA = 50,
  ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER = 51,
};

bool ChromeThreadDescriptor_ThreadType_IsValid(int value);
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_ThreadType_MIN = static_cast<ChromeThreadDescriptor_ThreadType>(0);
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_ThreadType_MAX = static_cast<ChromeThreadDescriptor_ThreadType>(51);
constexpr int ChromeThreadDescriptor_ThreadType_ThreadType_ARRAYSIZE = 51 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
ChromeThreadDescriptor_ThreadType_descriptor();
template <typename T>
const std::string& ChromeThreadDescriptor_ThreadType_Name(T value) {
  static_assert(std::is_same<T, ChromeThreadDescriptor_ThreadType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ThreadType_Name().");
  return ChromeThreadDescriptor_ThreadType_Name(static_cast<ChromeThreadDescriptor_ThreadType>(value));
}
template <>
inline const std::string& ChromeThreadDescriptor_ThreadType_Name(ChromeThreadDescriptor_ThreadType value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<ChromeThreadDescriptor_ThreadType_descriptor,
                                                 0, 51>(
      static_cast<int>(value));
}
inline bool ChromeThreadDescriptor_ThreadType_Parse(absl::string_view name, ChromeThreadDescriptor_ThreadType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChromeThreadDescriptor_ThreadType>(
      ChromeThreadDescriptor_ThreadType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class ChromeThreadDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeThreadDescriptor) */ {
 public:
  inline ChromeThreadDescriptor() : ChromeThreadDescriptor(nullptr) {}
  ~ChromeThreadDescriptor() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ChromeThreadDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeThreadDescriptor(const ChromeThreadDescriptor& from);
  ChromeThreadDescriptor(ChromeThreadDescriptor&& from) noexcept
    : ChromeThreadDescriptor() {
    *this = ::std::move(from);
  }

  inline ChromeThreadDescriptor& operator=(const ChromeThreadDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeThreadDescriptor& operator=(ChromeThreadDescriptor&& from) noexcept {
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
  static const ChromeThreadDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeThreadDescriptor* internal_default_instance() {
    return reinterpret_cast<const ChromeThreadDescriptor*>(
               &_ChromeThreadDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeThreadDescriptor& a, ChromeThreadDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeThreadDescriptor* other) {
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
  void UnsafeArenaSwap(ChromeThreadDescriptor* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeThreadDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeThreadDescriptor>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChromeThreadDescriptor& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChromeThreadDescriptor& from) {
    ChromeThreadDescriptor::MergeImpl(*this, from);
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
  void InternalSwap(ChromeThreadDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ChromeThreadDescriptor";
  }
  protected:
  explicit ChromeThreadDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using ThreadType = ChromeThreadDescriptor_ThreadType;
  static constexpr ThreadType THREAD_UNSPECIFIED = ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED;
  static constexpr ThreadType THREAD_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_MAIN;
  static constexpr ThreadType THREAD_IO = ChromeThreadDescriptor_ThreadType_THREAD_IO;
  static constexpr ThreadType THREAD_POOL_BG_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_WORKER;
  static constexpr ThreadType THREAD_POOL_FG_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_WORKER;
  static constexpr ThreadType THREAD_POOL_FG_BLOCKING = ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_BLOCKING;
  static constexpr ThreadType THREAD_POOL_BG_BLOCKING = ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_BLOCKING;
  static constexpr ThreadType THREAD_POOL_SERVICE = ChromeThreadDescriptor_ThreadType_THREAD_POOL_SERVICE;
  static constexpr ThreadType THREAD_COMPOSITOR = ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR;
  static constexpr ThreadType THREAD_VIZ_COMPOSITOR = ChromeThreadDescriptor_ThreadType_THREAD_VIZ_COMPOSITOR;
  static constexpr ThreadType THREAD_COMPOSITOR_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR_WORKER;
  static constexpr ThreadType THREAD_SERVICE_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_SERVICE_WORKER;
  static constexpr ThreadType THREAD_NETWORK_SERVICE = ChromeThreadDescriptor_ThreadType_THREAD_NETWORK_SERVICE;
  static constexpr ThreadType THREAD_CHILD_IO = ChromeThreadDescriptor_ThreadType_THREAD_CHILD_IO;
  static constexpr ThreadType THREAD_BROWSER_IO = ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_IO;
  static constexpr ThreadType THREAD_BROWSER_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_MAIN;
  static constexpr ThreadType THREAD_RENDERER_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_RENDERER_MAIN;
  static constexpr ThreadType THREAD_UTILITY_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_UTILITY_MAIN;
  static constexpr ThreadType THREAD_GPU_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_GPU_MAIN;
  static constexpr ThreadType THREAD_CACHE_BLOCKFILE = ChromeThreadDescriptor_ThreadType_THREAD_CACHE_BLOCKFILE;
  static constexpr ThreadType THREAD_MEDIA = ChromeThreadDescriptor_ThreadType_THREAD_MEDIA;
  static constexpr ThreadType THREAD_AUDIO_OUTPUTDEVICE = ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_OUTPUTDEVICE;
  static constexpr ThreadType THREAD_AUDIO_INPUTDEVICE = ChromeThreadDescriptor_ThreadType_THREAD_AUDIO_INPUTDEVICE;
  static constexpr ThreadType THREAD_GPU_MEMORY = ChromeThreadDescriptor_ThreadType_THREAD_GPU_MEMORY;
  static constexpr ThreadType THREAD_GPU_VSYNC = ChromeThreadDescriptor_ThreadType_THREAD_GPU_VSYNC;
  static constexpr ThreadType THREAD_DXA_VIDEODECODER = ChromeThreadDescriptor_ThreadType_THREAD_DXA_VIDEODECODER;
  static constexpr ThreadType THREAD_BROWSER_WATCHDOG = ChromeThreadDescriptor_ThreadType_THREAD_BROWSER_WATCHDOG;
  static constexpr ThreadType THREAD_WEBRTC_NETWORK = ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_NETWORK;
  static constexpr ThreadType THREAD_WINDOW_OWNER = ChromeThreadDescriptor_ThreadType_THREAD_WINDOW_OWNER;
  static constexpr ThreadType THREAD_WEBRTC_SIGNALING = ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_SIGNALING;
  static constexpr ThreadType THREAD_WEBRTC_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_WEBRTC_WORKER;
  static constexpr ThreadType THREAD_PPAPI_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_PPAPI_MAIN;
  static constexpr ThreadType THREAD_GPU_WATCHDOG = ChromeThreadDescriptor_ThreadType_THREAD_GPU_WATCHDOG;
  static constexpr ThreadType THREAD_SWAPPER = ChromeThreadDescriptor_ThreadType_THREAD_SWAPPER;
  static constexpr ThreadType THREAD_GAMEPAD_POLLING = ChromeThreadDescriptor_ThreadType_THREAD_GAMEPAD_POLLING;
  static constexpr ThreadType THREAD_WEBCRYPTO = ChromeThreadDescriptor_ThreadType_THREAD_WEBCRYPTO;
  static constexpr ThreadType THREAD_DATABASE = ChromeThreadDescriptor_ThreadType_THREAD_DATABASE;
  static constexpr ThreadType THREAD_PROXYRESOLVER = ChromeThreadDescriptor_ThreadType_THREAD_PROXYRESOLVER;
  static constexpr ThreadType THREAD_DEVTOOLSADB = ChromeThreadDescriptor_ThreadType_THREAD_DEVTOOLSADB;
  static constexpr ThreadType THREAD_NETWORKCONFIGWATCHER = ChromeThreadDescriptor_ThreadType_THREAD_NETWORKCONFIGWATCHER;
  static constexpr ThreadType THREAD_WASAPI_RENDER = ChromeThreadDescriptor_ThreadType_THREAD_WASAPI_RENDER;
  static constexpr ThreadType THREAD_LOADER_LOCK_SAMPLER = ChromeThreadDescriptor_ThreadType_THREAD_LOADER_LOCK_SAMPLER;
  static constexpr ThreadType THREAD_MEMORY_INFRA = ChromeThreadDescriptor_ThreadType_THREAD_MEMORY_INFRA;
  static constexpr ThreadType THREAD_SAMPLING_PROFILER = ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER;
  static inline bool ThreadType_IsValid(int value) {
    return ChromeThreadDescriptor_ThreadType_IsValid(value);
  }
  static constexpr ThreadType ThreadType_MIN = ChromeThreadDescriptor_ThreadType_ThreadType_MIN;
  static constexpr ThreadType ThreadType_MAX = ChromeThreadDescriptor_ThreadType_ThreadType_MAX;
  static constexpr int ThreadType_ARRAYSIZE = ChromeThreadDescriptor_ThreadType_ThreadType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ThreadType_descriptor() {
    return ChromeThreadDescriptor_ThreadType_descriptor();
  }
  template <typename T>
  static inline const std::string& ThreadType_Name(T value) {
    return ChromeThreadDescriptor_ThreadType_Name(value);
  }
  static inline bool ThreadType_Parse(absl::string_view name, ThreadType* value) {
    return ChromeThreadDescriptor_ThreadType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kThreadTypeFieldNumber = 1,
    kLegacySortIndexFieldNumber = 2,
  };
  // optional .perfetto.protos.ChromeThreadDescriptor.ThreadType thread_type = 1;
  bool has_thread_type() const;
  void clear_thread_type() ;
  ::perfetto::protos::ChromeThreadDescriptor_ThreadType thread_type() const;
  void set_thread_type(::perfetto::protos::ChromeThreadDescriptor_ThreadType value);

  private:
  ::perfetto::protos::ChromeThreadDescriptor_ThreadType _internal_thread_type() const;
  void _internal_set_thread_type(::perfetto::protos::ChromeThreadDescriptor_ThreadType value);

  public:
  // optional int32 legacy_sort_index = 2;
  bool has_legacy_sort_index() const;
  void clear_legacy_sort_index() ;
  ::int32_t legacy_sort_index() const;
  void set_legacy_sort_index(::int32_t value);

  private:
  ::int32_t _internal_legacy_sort_index() const;
  void _internal_set_legacy_sort_index(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeThreadDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int thread_type_;
    ::int32_t legacy_sort_index_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ChromeThreadDescriptor

// optional .perfetto.protos.ChromeThreadDescriptor.ThreadType thread_type = 1;
inline bool ChromeThreadDescriptor::has_thread_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ChromeThreadDescriptor::clear_thread_type() {
  _impl_.thread_type_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::perfetto::protos::ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::thread_type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeThreadDescriptor.thread_type)
  return _internal_thread_type();
}
inline void ChromeThreadDescriptor::set_thread_type(::perfetto::protos::ChromeThreadDescriptor_ThreadType value) {
   _internal_set_thread_type(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeThreadDescriptor.thread_type)
}
inline ::perfetto::protos::ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::_internal_thread_type() const {
  return static_cast<::perfetto::protos::ChromeThreadDescriptor_ThreadType>(_impl_.thread_type_);
}
inline void ChromeThreadDescriptor::_internal_set_thread_type(::perfetto::protos::ChromeThreadDescriptor_ThreadType value) {
  assert(::perfetto::protos::ChromeThreadDescriptor_ThreadType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.thread_type_ = value;
}

// optional int32 legacy_sort_index = 2;
inline bool ChromeThreadDescriptor::has_legacy_sort_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ChromeThreadDescriptor::clear_legacy_sort_index() {
  _impl_.legacy_sort_index_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t ChromeThreadDescriptor::legacy_sort_index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeThreadDescriptor.legacy_sort_index)
  return _internal_legacy_sort_index();
}
inline void ChromeThreadDescriptor::set_legacy_sort_index(::int32_t value) {
  _internal_set_legacy_sort_index(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeThreadDescriptor.legacy_sort_index)
}
inline ::int32_t ChromeThreadDescriptor::_internal_legacy_sort_index() const {
  return _impl_.legacy_sort_index_;
}
inline void ChromeThreadDescriptor::_internal_set_legacy_sort_index(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.legacy_sort_index_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::ChromeThreadDescriptor_ThreadType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::ChromeThreadDescriptor_ThreadType>() {
  return ::perfetto::protos::ChromeThreadDescriptor_ThreadType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fthread_5fdescriptor_2eproto_2epb_2eh
