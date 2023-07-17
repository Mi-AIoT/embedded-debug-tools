// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/process_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto;
namespace perfetto {
namespace protos {
class ProcessDescriptor;
struct ProcessDescriptorDefaultTypeInternal;
extern ProcessDescriptorDefaultTypeInternal _ProcessDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::ProcessDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::ProcessDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {
enum ProcessDescriptor_ChromeProcessType : int {
  ProcessDescriptor_ChromeProcessType_PROCESS_UNSPECIFIED = 0,
  ProcessDescriptor_ChromeProcessType_PROCESS_BROWSER = 1,
  ProcessDescriptor_ChromeProcessType_PROCESS_RENDERER = 2,
  ProcessDescriptor_ChromeProcessType_PROCESS_UTILITY = 3,
  ProcessDescriptor_ChromeProcessType_PROCESS_ZYGOTE = 4,
  ProcessDescriptor_ChromeProcessType_PROCESS_SANDBOX_HELPER = 5,
  ProcessDescriptor_ChromeProcessType_PROCESS_GPU = 6,
  ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_PLUGIN = 7,
  ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_BROKER = 8,
};

bool ProcessDescriptor_ChromeProcessType_IsValid(int value);
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor_ChromeProcessType_ChromeProcessType_MIN = static_cast<ProcessDescriptor_ChromeProcessType>(0);
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor_ChromeProcessType_ChromeProcessType_MAX = static_cast<ProcessDescriptor_ChromeProcessType>(8);
constexpr int ProcessDescriptor_ChromeProcessType_ChromeProcessType_ARRAYSIZE = 8 + 1;
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
ProcessDescriptor_ChromeProcessType_descriptor();
template <typename T>
const std::string& ProcessDescriptor_ChromeProcessType_Name(T value) {
  static_assert(std::is_same<T, ProcessDescriptor_ChromeProcessType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ChromeProcessType_Name().");
  return ProcessDescriptor_ChromeProcessType_Name(static_cast<ProcessDescriptor_ChromeProcessType>(value));
}
template <>
inline const std::string& ProcessDescriptor_ChromeProcessType_Name(ProcessDescriptor_ChromeProcessType value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfDenseEnum<ProcessDescriptor_ChromeProcessType_descriptor,
                                                 0, 8>(
      static_cast<int>(value));
}
inline bool ProcessDescriptor_ChromeProcessType_Parse(absl::string_view name, ProcessDescriptor_ChromeProcessType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ProcessDescriptor_ChromeProcessType>(
      ProcessDescriptor_ChromeProcessType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class ProcessDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.ProcessDescriptor) */ {
 public:
  inline ProcessDescriptor() : ProcessDescriptor(nullptr) {}
  ~ProcessDescriptor() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ProcessDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProcessDescriptor(const ProcessDescriptor& from);
  ProcessDescriptor(ProcessDescriptor&& from) noexcept
    : ProcessDescriptor() {
    *this = ::std::move(from);
  }

  inline ProcessDescriptor& operator=(const ProcessDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProcessDescriptor& operator=(ProcessDescriptor&& from) noexcept {
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
  static const ProcessDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProcessDescriptor* internal_default_instance() {
    return reinterpret_cast<const ProcessDescriptor*>(
               &_ProcessDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProcessDescriptor& a, ProcessDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(ProcessDescriptor* other) {
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
  void UnsafeArenaSwap(ProcessDescriptor* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ProcessDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ProcessDescriptor>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ProcessDescriptor& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ProcessDescriptor& from) {
    ProcessDescriptor::MergeImpl(*this, from);
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
  void InternalSwap(ProcessDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.ProcessDescriptor";
  }
  protected:
  explicit ProcessDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using ChromeProcessType = ProcessDescriptor_ChromeProcessType;
  static constexpr ChromeProcessType PROCESS_UNSPECIFIED = ProcessDescriptor_ChromeProcessType_PROCESS_UNSPECIFIED;
  static constexpr ChromeProcessType PROCESS_BROWSER = ProcessDescriptor_ChromeProcessType_PROCESS_BROWSER;
  static constexpr ChromeProcessType PROCESS_RENDERER = ProcessDescriptor_ChromeProcessType_PROCESS_RENDERER;
  static constexpr ChromeProcessType PROCESS_UTILITY = ProcessDescriptor_ChromeProcessType_PROCESS_UTILITY;
  static constexpr ChromeProcessType PROCESS_ZYGOTE = ProcessDescriptor_ChromeProcessType_PROCESS_ZYGOTE;
  static constexpr ChromeProcessType PROCESS_SANDBOX_HELPER = ProcessDescriptor_ChromeProcessType_PROCESS_SANDBOX_HELPER;
  static constexpr ChromeProcessType PROCESS_GPU = ProcessDescriptor_ChromeProcessType_PROCESS_GPU;
  static constexpr ChromeProcessType PROCESS_PPAPI_PLUGIN = ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_PLUGIN;
  static constexpr ChromeProcessType PROCESS_PPAPI_BROKER = ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_BROKER;
  static inline bool ChromeProcessType_IsValid(int value) {
    return ProcessDescriptor_ChromeProcessType_IsValid(value);
  }
  static constexpr ChromeProcessType ChromeProcessType_MIN = ProcessDescriptor_ChromeProcessType_ChromeProcessType_MIN;
  static constexpr ChromeProcessType ChromeProcessType_MAX = ProcessDescriptor_ChromeProcessType_ChromeProcessType_MAX;
  static constexpr int ChromeProcessType_ARRAYSIZE = ProcessDescriptor_ChromeProcessType_ChromeProcessType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChromeProcessType_descriptor() {
    return ProcessDescriptor_ChromeProcessType_descriptor();
  }
  template <typename T>
  static inline const std::string& ChromeProcessType_Name(T value) {
    return ProcessDescriptor_ChromeProcessType_Name(value);
  }
  static inline bool ChromeProcessType_Parse(absl::string_view name, ChromeProcessType* value) {
    return ProcessDescriptor_ChromeProcessType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kCmdlineFieldNumber = 2,
    kProcessLabelsFieldNumber = 8,
    kProcessNameFieldNumber = 6,
    kPidFieldNumber = 1,
    kLegacySortIndexFieldNumber = 3,
    kChromeProcessTypeFieldNumber = 4,
    kProcessPriorityFieldNumber = 5,
    kStartTimestampNsFieldNumber = 7,
  };
  // repeated string cmdline = 2;
  int cmdline_size() const;
  private:
  int _internal_cmdline_size() const;

  public:
  void clear_cmdline() ;
  const std::string& cmdline(int index) const;
  std::string* mutable_cmdline(int index);
  void set_cmdline(int index, const std::string& value);
  void set_cmdline(int index, std::string&& value);
  void set_cmdline(int index, const char* value);
  void set_cmdline(int index, const char* value, std::size_t size);
  void set_cmdline(int index, absl::string_view value);
  std::string* add_cmdline();
  void add_cmdline(const std::string& value);
  void add_cmdline(std::string&& value);
  void add_cmdline(const char* value);
  void add_cmdline(const char* value, std::size_t size);
  void add_cmdline(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& cmdline() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_cmdline();

  private:
  const std::string& _internal_cmdline(int index) const;
  std::string* _internal_add_cmdline();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_cmdline() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_cmdline();

  public:
  // repeated string process_labels = 8;
  int process_labels_size() const;
  private:
  int _internal_process_labels_size() const;

  public:
  void clear_process_labels() ;
  const std::string& process_labels(int index) const;
  std::string* mutable_process_labels(int index);
  void set_process_labels(int index, const std::string& value);
  void set_process_labels(int index, std::string&& value);
  void set_process_labels(int index, const char* value);
  void set_process_labels(int index, const char* value, std::size_t size);
  void set_process_labels(int index, absl::string_view value);
  std::string* add_process_labels();
  void add_process_labels(const std::string& value);
  void add_process_labels(std::string&& value);
  void add_process_labels(const char* value);
  void add_process_labels(const char* value, std::size_t size);
  void add_process_labels(absl::string_view value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& process_labels() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_process_labels();

  private:
  const std::string& _internal_process_labels(int index) const;
  std::string* _internal_add_process_labels();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _internal_process_labels() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* _internal_mutable_process_labels();

  public:
  // optional string process_name = 6;
  bool has_process_name() const;
  void clear_process_name() ;
  const std::string& process_name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_process_name(Arg_&& arg, Args_... args);
  std::string* mutable_process_name();
  PROTOBUF_NODISCARD std::string* release_process_name();
  void set_allocated_process_name(std::string* ptr);

  private:
  const std::string& _internal_process_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_process_name(
      const std::string& value);
  std::string* _internal_mutable_process_name();

  public:
  // optional int32 pid = 1;
  bool has_pid() const;
  void clear_pid() ;
  ::int32_t pid() const;
  void set_pid(::int32_t value);

  private:
  ::int32_t _internal_pid() const;
  void _internal_set_pid(::int32_t value);

  public:
  // optional int32 legacy_sort_index = 3;
  bool has_legacy_sort_index() const;
  void clear_legacy_sort_index() ;
  ::int32_t legacy_sort_index() const;
  void set_legacy_sort_index(::int32_t value);

  private:
  ::int32_t _internal_legacy_sort_index() const;
  void _internal_set_legacy_sort_index(::int32_t value);

  public:
  // optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
  bool has_chrome_process_type() const;
  void clear_chrome_process_type() ;
  ::perfetto::protos::ProcessDescriptor_ChromeProcessType chrome_process_type() const;
  void set_chrome_process_type(::perfetto::protos::ProcessDescriptor_ChromeProcessType value);

  private:
  ::perfetto::protos::ProcessDescriptor_ChromeProcessType _internal_chrome_process_type() const;
  void _internal_set_chrome_process_type(::perfetto::protos::ProcessDescriptor_ChromeProcessType value);

  public:
  // optional int32 process_priority = 5;
  bool has_process_priority() const;
  void clear_process_priority() ;
  ::int32_t process_priority() const;
  void set_process_priority(::int32_t value);

  private:
  ::int32_t _internal_process_priority() const;
  void _internal_set_process_priority(::int32_t value);

  public:
  // optional int64 start_timestamp_ns = 7;
  bool has_start_timestamp_ns() const;
  void clear_start_timestamp_ns() ;
  ::int64_t start_timestamp_ns() const;
  void set_start_timestamp_ns(::int64_t value);

  private:
  ::int64_t _internal_start_timestamp_ns() const;
  void _internal_set_start_timestamp_ns(::int64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.ProcessDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> cmdline_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> process_labels_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr process_name_;
    ::int32_t pid_;
    ::int32_t legacy_sort_index_;
    int chrome_process_type_;
    ::int32_t process_priority_;
    ::int64_t start_timestamp_ns_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ProcessDescriptor

// optional int32 pid = 1;
inline bool ProcessDescriptor::has_pid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void ProcessDescriptor::clear_pid() {
  _impl_.pid_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t ProcessDescriptor::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.pid)
  return _internal_pid();
}
inline void ProcessDescriptor::set_pid(::int32_t value) {
  _internal_set_pid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.pid)
}
inline ::int32_t ProcessDescriptor::_internal_pid() const {
  return _impl_.pid_;
}
inline void ProcessDescriptor::_internal_set_pid(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.pid_ = value;
}

// repeated string cmdline = 2;
inline int ProcessDescriptor::_internal_cmdline_size() const {
  return _impl_.cmdline_.size();
}
inline int ProcessDescriptor::cmdline_size() const {
  return _internal_cmdline_size();
}
inline void ProcessDescriptor::clear_cmdline() {
  _internal_mutable_cmdline()->Clear();
}
inline std::string* ProcessDescriptor::add_cmdline() {
  std::string* _s = _internal_add_cmdline();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.ProcessDescriptor.cmdline)
  return _s;
}
inline const std::string& ProcessDescriptor::cmdline(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.cmdline)
  return _internal_cmdline(index);
}
inline std::string* ProcessDescriptor::mutable_cmdline(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ProcessDescriptor.cmdline)
  return _internal_mutable_cmdline()->Mutable(index);
}
inline void ProcessDescriptor::set_cmdline(int index, const std::string& value) {
  _internal_mutable_cmdline()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::set_cmdline(int index, std::string&& value) {
  _internal_mutable_cmdline()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::set_cmdline(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_cmdline()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::set_cmdline(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_cmdline()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::set_cmdline(int index, absl::string_view value) {
  _internal_mutable_cmdline()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(const std::string& value) {
  _internal_mutable_cmdline()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(std::string&& value) {
  _internal_mutable_cmdline()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_cmdline()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(const char* value, std::size_t size) {
  _internal_mutable_cmdline()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(absl::string_view value) {
  _internal_mutable_cmdline()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:perfetto.protos.ProcessDescriptor.cmdline)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ProcessDescriptor::cmdline() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ProcessDescriptor.cmdline)
  return _internal_cmdline();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* ProcessDescriptor::mutable_cmdline() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ProcessDescriptor.cmdline)
  return _internal_mutable_cmdline();
}
inline const std::string& ProcessDescriptor::_internal_cmdline(int index) const {
  return _internal_cmdline().Get(index);
}
inline std::string* ProcessDescriptor::_internal_add_cmdline() {
  return _internal_mutable_cmdline()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ProcessDescriptor::_internal_cmdline() const {
  return _impl_.cmdline_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ProcessDescriptor::_internal_mutable_cmdline() {
  return &_impl_.cmdline_;
}

// optional string process_name = 6;
inline bool ProcessDescriptor::has_process_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void ProcessDescriptor::clear_process_name() {
  _impl_.process_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ProcessDescriptor::process_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.process_name)
  return _internal_process_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ProcessDescriptor::set_process_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.process_name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.process_name)
}
inline std::string* ProcessDescriptor::mutable_process_name() {
  std::string* _s = _internal_mutable_process_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ProcessDescriptor.process_name)
  return _s;
}
inline const std::string& ProcessDescriptor::_internal_process_name() const {
  return _impl_.process_name_.Get();
}
inline void ProcessDescriptor::_internal_set_process_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.process_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ProcessDescriptor::_internal_mutable_process_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.process_name_.Mutable( GetArenaForAllocation());
}
inline std::string* ProcessDescriptor::release_process_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ProcessDescriptor.process_name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.process_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.process_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void ProcessDescriptor::set_allocated_process_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.process_name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.process_name_.IsDefault()) {
          _impl_.process_name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ProcessDescriptor.process_name)
}

// optional int32 process_priority = 5;
inline bool ProcessDescriptor::has_process_priority() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void ProcessDescriptor::clear_process_priority() {
  _impl_.process_priority_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int32_t ProcessDescriptor::process_priority() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.process_priority)
  return _internal_process_priority();
}
inline void ProcessDescriptor::set_process_priority(::int32_t value) {
  _internal_set_process_priority(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.process_priority)
}
inline ::int32_t ProcessDescriptor::_internal_process_priority() const {
  return _impl_.process_priority_;
}
inline void ProcessDescriptor::_internal_set_process_priority(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.process_priority_ = value;
}

// optional int64 start_timestamp_ns = 7;
inline bool ProcessDescriptor::has_start_timestamp_ns() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline void ProcessDescriptor::clear_start_timestamp_ns() {
  _impl_.start_timestamp_ns_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t ProcessDescriptor::start_timestamp_ns() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.start_timestamp_ns)
  return _internal_start_timestamp_ns();
}
inline void ProcessDescriptor::set_start_timestamp_ns(::int64_t value) {
  _internal_set_start_timestamp_ns(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.start_timestamp_ns)
}
inline ::int64_t ProcessDescriptor::_internal_start_timestamp_ns() const {
  return _impl_.start_timestamp_ns_;
}
inline void ProcessDescriptor::_internal_set_start_timestamp_ns(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.start_timestamp_ns_ = value;
}

// optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
inline bool ProcessDescriptor::has_chrome_process_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void ProcessDescriptor::clear_chrome_process_type() {
  _impl_.chrome_process_type_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::perfetto::protos::ProcessDescriptor_ChromeProcessType ProcessDescriptor::chrome_process_type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.chrome_process_type)
  return _internal_chrome_process_type();
}
inline void ProcessDescriptor::set_chrome_process_type(::perfetto::protos::ProcessDescriptor_ChromeProcessType value) {
   _internal_set_chrome_process_type(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.chrome_process_type)
}
inline ::perfetto::protos::ProcessDescriptor_ChromeProcessType ProcessDescriptor::_internal_chrome_process_type() const {
  return static_cast<::perfetto::protos::ProcessDescriptor_ChromeProcessType>(_impl_.chrome_process_type_);
}
inline void ProcessDescriptor::_internal_set_chrome_process_type(::perfetto::protos::ProcessDescriptor_ChromeProcessType value) {
  assert(::perfetto::protos::ProcessDescriptor_ChromeProcessType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.chrome_process_type_ = value;
}

// optional int32 legacy_sort_index = 3;
inline bool ProcessDescriptor::has_legacy_sort_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void ProcessDescriptor::clear_legacy_sort_index() {
  _impl_.legacy_sort_index_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t ProcessDescriptor::legacy_sort_index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.legacy_sort_index)
  return _internal_legacy_sort_index();
}
inline void ProcessDescriptor::set_legacy_sort_index(::int32_t value) {
  _internal_set_legacy_sort_index(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.legacy_sort_index)
}
inline ::int32_t ProcessDescriptor::_internal_legacy_sort_index() const {
  return _impl_.legacy_sort_index_;
}
inline void ProcessDescriptor::_internal_set_legacy_sort_index(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.legacy_sort_index_ = value;
}

// repeated string process_labels = 8;
inline int ProcessDescriptor::_internal_process_labels_size() const {
  return _impl_.process_labels_.size();
}
inline int ProcessDescriptor::process_labels_size() const {
  return _internal_process_labels_size();
}
inline void ProcessDescriptor::clear_process_labels() {
  _internal_mutable_process_labels()->Clear();
}
inline std::string* ProcessDescriptor::add_process_labels() {
  std::string* _s = _internal_add_process_labels();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.ProcessDescriptor.process_labels)
  return _s;
}
inline const std::string& ProcessDescriptor::process_labels(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.process_labels)
  return _internal_process_labels(index);
}
inline std::string* ProcessDescriptor::mutable_process_labels(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ProcessDescriptor.process_labels)
  return _internal_mutable_process_labels()->Mutable(index);
}
inline void ProcessDescriptor::set_process_labels(int index, const std::string& value) {
  _internal_mutable_process_labels()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::set_process_labels(int index, std::string&& value) {
  _internal_mutable_process_labels()->Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::set_process_labels(int index, const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_process_labels()->Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::set_process_labels(int index, const char* value,
                              std::size_t size) {
  _internal_mutable_process_labels()->Mutable(index)->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::set_process_labels(int index, absl::string_view value) {
  _internal_mutable_process_labels()->Mutable(index)->assign(value.data(),
                                                     value.size());
  // @@protoc_insertion_point(field_set_string_piece:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::add_process_labels(const std::string& value) {
  _internal_mutable_process_labels()->Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::add_process_labels(std::string&& value) {
  _internal_mutable_process_labels()->Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::add_process_labels(const char* value) {
  ABSL_DCHECK(value != nullptr);
  _internal_mutable_process_labels()->Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::add_process_labels(const char* value, std::size_t size) {
  _internal_mutable_process_labels()->Add()->assign(
      reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.ProcessDescriptor.process_labels)
}
inline void ProcessDescriptor::add_process_labels(absl::string_view value) {
  _internal_mutable_process_labels()->Add()->assign(value.data(), value.size());
  // @@protoc_insertion_point(field_add_string_piece:perfetto.protos.ProcessDescriptor.process_labels)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ProcessDescriptor::process_labels() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ProcessDescriptor.process_labels)
  return _internal_process_labels();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* ProcessDescriptor::mutable_process_labels() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ProcessDescriptor.process_labels)
  return _internal_mutable_process_labels();
}
inline const std::string& ProcessDescriptor::_internal_process_labels(int index) const {
  return _internal_process_labels().Get(index);
}
inline std::string* ProcessDescriptor::_internal_add_process_labels() {
  return _internal_mutable_process_labels()->Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ProcessDescriptor::_internal_process_labels() const {
  return _impl_.process_labels_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ProcessDescriptor::_internal_mutable_process_labels() {
  return &_impl_.process_labels_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


PROTOBUF_NAMESPACE_OPEN

template <>
struct is_proto_enum<::perfetto::protos::ProcessDescriptor_ChromeProcessType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::perfetto::protos::ProcessDescriptor_ChromeProcessType>() {
  return ::perfetto::protos::ProcessDescriptor_ChromeProcessType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto_2epb_2eh
