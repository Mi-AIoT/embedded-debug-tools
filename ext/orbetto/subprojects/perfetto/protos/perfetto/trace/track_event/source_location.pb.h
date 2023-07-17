// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/source_location.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto;
namespace perfetto {
namespace protos {
class SourceLocation;
struct SourceLocationDefaultTypeInternal;
extern SourceLocationDefaultTypeInternal _SourceLocation_default_instance_;
class UnsymbolizedSourceLocation;
struct UnsymbolizedSourceLocationDefaultTypeInternal;
extern UnsymbolizedSourceLocationDefaultTypeInternal _UnsymbolizedSourceLocation_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::SourceLocation* Arena::CreateMaybeMessage<::perfetto::protos::SourceLocation>(Arena*);
template <>
::perfetto::protos::UnsymbolizedSourceLocation* Arena::CreateMaybeMessage<::perfetto::protos::UnsymbolizedSourceLocation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class UnsymbolizedSourceLocation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.UnsymbolizedSourceLocation) */ {
 public:
  inline UnsymbolizedSourceLocation() : UnsymbolizedSourceLocation(nullptr) {}
  ~UnsymbolizedSourceLocation() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR UnsymbolizedSourceLocation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UnsymbolizedSourceLocation(const UnsymbolizedSourceLocation& from);
  UnsymbolizedSourceLocation(UnsymbolizedSourceLocation&& from) noexcept
    : UnsymbolizedSourceLocation() {
    *this = ::std::move(from);
  }

  inline UnsymbolizedSourceLocation& operator=(const UnsymbolizedSourceLocation& from) {
    CopyFrom(from);
    return *this;
  }
  inline UnsymbolizedSourceLocation& operator=(UnsymbolizedSourceLocation&& from) noexcept {
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
  static const UnsymbolizedSourceLocation& default_instance() {
    return *internal_default_instance();
  }
  static inline const UnsymbolizedSourceLocation* internal_default_instance() {
    return reinterpret_cast<const UnsymbolizedSourceLocation*>(
               &_UnsymbolizedSourceLocation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UnsymbolizedSourceLocation& a, UnsymbolizedSourceLocation& b) {
    a.Swap(&b);
  }
  inline void Swap(UnsymbolizedSourceLocation* other) {
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
  void UnsafeArenaSwap(UnsymbolizedSourceLocation* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UnsymbolizedSourceLocation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UnsymbolizedSourceLocation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UnsymbolizedSourceLocation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UnsymbolizedSourceLocation& from) {
    UnsymbolizedSourceLocation::MergeImpl(*this, from);
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
  void InternalSwap(UnsymbolizedSourceLocation* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.UnsymbolizedSourceLocation";
  }
  protected:
  explicit UnsymbolizedSourceLocation(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIidFieldNumber = 1,
    kMappingIdFieldNumber = 2,
    kRelPcFieldNumber = 3,
  };
  // optional uint64 iid = 1;
  bool has_iid() const;
  void clear_iid() ;
  ::uint64_t iid() const;
  void set_iid(::uint64_t value);

  private:
  ::uint64_t _internal_iid() const;
  void _internal_set_iid(::uint64_t value);

  public:
  // optional uint64 mapping_id = 2;
  bool has_mapping_id() const;
  void clear_mapping_id() ;
  ::uint64_t mapping_id() const;
  void set_mapping_id(::uint64_t value);

  private:
  ::uint64_t _internal_mapping_id() const;
  void _internal_set_mapping_id(::uint64_t value);

  public:
  // optional uint64 rel_pc = 3;
  bool has_rel_pc() const;
  void clear_rel_pc() ;
  ::uint64_t rel_pc() const;
  void set_rel_pc(::uint64_t value);

  private:
  ::uint64_t _internal_rel_pc() const;
  void _internal_set_rel_pc(::uint64_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.UnsymbolizedSourceLocation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint64_t iid_;
    ::uint64_t mapping_id_;
    ::uint64_t rel_pc_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto;
};// -------------------------------------------------------------------

class SourceLocation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.SourceLocation) */ {
 public:
  inline SourceLocation() : SourceLocation(nullptr) {}
  ~SourceLocation() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR SourceLocation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SourceLocation(const SourceLocation& from);
  SourceLocation(SourceLocation&& from) noexcept
    : SourceLocation() {
    *this = ::std::move(from);
  }

  inline SourceLocation& operator=(const SourceLocation& from) {
    CopyFrom(from);
    return *this;
  }
  inline SourceLocation& operator=(SourceLocation&& from) noexcept {
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
  static const SourceLocation& default_instance() {
    return *internal_default_instance();
  }
  static inline const SourceLocation* internal_default_instance() {
    return reinterpret_cast<const SourceLocation*>(
               &_SourceLocation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SourceLocation& a, SourceLocation& b) {
    a.Swap(&b);
  }
  inline void Swap(SourceLocation* other) {
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
  void UnsafeArenaSwap(SourceLocation* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SourceLocation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SourceLocation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SourceLocation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SourceLocation& from) {
    SourceLocation::MergeImpl(*this, from);
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
  void InternalSwap(SourceLocation* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.SourceLocation";
  }
  protected:
  explicit SourceLocation(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFileNameFieldNumber = 2,
    kFunctionNameFieldNumber = 3,
    kIidFieldNumber = 1,
    kLineNumberFieldNumber = 4,
  };
  // optional string file_name = 2;
  bool has_file_name() const;
  void clear_file_name() ;
  const std::string& file_name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_file_name(Arg_&& arg, Args_... args);
  std::string* mutable_file_name();
  PROTOBUF_NODISCARD std::string* release_file_name();
  void set_allocated_file_name(std::string* ptr);

  private:
  const std::string& _internal_file_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_file_name(
      const std::string& value);
  std::string* _internal_mutable_file_name();

  public:
  // optional string function_name = 3;
  bool has_function_name() const;
  void clear_function_name() ;
  const std::string& function_name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_function_name(Arg_&& arg, Args_... args);
  std::string* mutable_function_name();
  PROTOBUF_NODISCARD std::string* release_function_name();
  void set_allocated_function_name(std::string* ptr);

  private:
  const std::string& _internal_function_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_function_name(
      const std::string& value);
  std::string* _internal_mutable_function_name();

  public:
  // optional uint64 iid = 1;
  bool has_iid() const;
  void clear_iid() ;
  ::uint64_t iid() const;
  void set_iid(::uint64_t value);

  private:
  ::uint64_t _internal_iid() const;
  void _internal_set_iid(::uint64_t value);

  public:
  // optional uint32 line_number = 4;
  bool has_line_number() const;
  void clear_line_number() ;
  ::uint32_t line_number() const;
  void set_line_number(::uint32_t value);

  private:
  ::uint32_t _internal_line_number() const;
  void _internal_set_line_number(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.SourceLocation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr function_name_;
    ::uint64_t iid_;
    ::uint32_t line_number_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// UnsymbolizedSourceLocation

// optional uint64 iid = 1;
inline bool UnsymbolizedSourceLocation::has_iid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void UnsymbolizedSourceLocation::clear_iid() {
  _impl_.iid_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t UnsymbolizedSourceLocation::iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UnsymbolizedSourceLocation.iid)
  return _internal_iid();
}
inline void UnsymbolizedSourceLocation::set_iid(::uint64_t value) {
  _internal_set_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.UnsymbolizedSourceLocation.iid)
}
inline ::uint64_t UnsymbolizedSourceLocation::_internal_iid() const {
  return _impl_.iid_;
}
inline void UnsymbolizedSourceLocation::_internal_set_iid(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.iid_ = value;
}

// optional uint64 mapping_id = 2;
inline bool UnsymbolizedSourceLocation::has_mapping_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void UnsymbolizedSourceLocation::clear_mapping_id() {
  _impl_.mapping_id_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t UnsymbolizedSourceLocation::mapping_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UnsymbolizedSourceLocation.mapping_id)
  return _internal_mapping_id();
}
inline void UnsymbolizedSourceLocation::set_mapping_id(::uint64_t value) {
  _internal_set_mapping_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.UnsymbolizedSourceLocation.mapping_id)
}
inline ::uint64_t UnsymbolizedSourceLocation::_internal_mapping_id() const {
  return _impl_.mapping_id_;
}
inline void UnsymbolizedSourceLocation::_internal_set_mapping_id(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.mapping_id_ = value;
}

// optional uint64 rel_pc = 3;
inline bool UnsymbolizedSourceLocation::has_rel_pc() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void UnsymbolizedSourceLocation::clear_rel_pc() {
  _impl_.rel_pc_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint64_t UnsymbolizedSourceLocation::rel_pc() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UnsymbolizedSourceLocation.rel_pc)
  return _internal_rel_pc();
}
inline void UnsymbolizedSourceLocation::set_rel_pc(::uint64_t value) {
  _internal_set_rel_pc(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.UnsymbolizedSourceLocation.rel_pc)
}
inline ::uint64_t UnsymbolizedSourceLocation::_internal_rel_pc() const {
  return _impl_.rel_pc_;
}
inline void UnsymbolizedSourceLocation::_internal_set_rel_pc(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.rel_pc_ = value;
}

// -------------------------------------------------------------------

// SourceLocation

// optional uint64 iid = 1;
inline bool SourceLocation::has_iid() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void SourceLocation::clear_iid() {
  _impl_.iid_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint64_t SourceLocation::iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.SourceLocation.iid)
  return _internal_iid();
}
inline void SourceLocation::set_iid(::uint64_t value) {
  _internal_set_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.SourceLocation.iid)
}
inline ::uint64_t SourceLocation::_internal_iid() const {
  return _impl_.iid_;
}
inline void SourceLocation::_internal_set_iid(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.iid_ = value;
}

// optional string file_name = 2;
inline bool SourceLocation::has_file_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void SourceLocation::clear_file_name() {
  _impl_.file_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SourceLocation::file_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.SourceLocation.file_name)
  return _internal_file_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void SourceLocation::set_file_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.file_name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.SourceLocation.file_name)
}
inline std::string* SourceLocation::mutable_file_name() {
  std::string* _s = _internal_mutable_file_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.SourceLocation.file_name)
  return _s;
}
inline const std::string& SourceLocation::_internal_file_name() const {
  return _impl_.file_name_.Get();
}
inline void SourceLocation::_internal_set_file_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.file_name_.Set(value, GetArenaForAllocation());
}
inline std::string* SourceLocation::_internal_mutable_file_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.file_name_.Mutable( GetArenaForAllocation());
}
inline std::string* SourceLocation::release_file_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.SourceLocation.file_name)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.file_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void SourceLocation::set_allocated_file_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.file_name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.file_name_.IsDefault()) {
          _impl_.file_name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.SourceLocation.file_name)
}

// optional string function_name = 3;
inline bool SourceLocation::has_function_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void SourceLocation::clear_function_name() {
  _impl_.function_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& SourceLocation::function_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.SourceLocation.function_name)
  return _internal_function_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void SourceLocation::set_function_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.function_name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.SourceLocation.function_name)
}
inline std::string* SourceLocation::mutable_function_name() {
  std::string* _s = _internal_mutable_function_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.SourceLocation.function_name)
  return _s;
}
inline const std::string& SourceLocation::_internal_function_name() const {
  return _impl_.function_name_.Get();
}
inline void SourceLocation::_internal_set_function_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;


  _impl_.function_name_.Set(value, GetArenaForAllocation());
}
inline std::string* SourceLocation::_internal_mutable_function_name() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.function_name_.Mutable( GetArenaForAllocation());
}
inline std::string* SourceLocation::release_function_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.SourceLocation.function_name)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.function_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.function_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void SourceLocation::set_allocated_function_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.function_name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.function_name_.IsDefault()) {
          _impl_.function_name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.SourceLocation.function_name)
}

// optional uint32 line_number = 4;
inline bool SourceLocation::has_line_number() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void SourceLocation::clear_line_number() {
  _impl_.line_number_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t SourceLocation::line_number() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.SourceLocation.line_number)
  return _internal_line_number();
}
inline void SourceLocation::set_line_number(::uint32_t value) {
  _internal_set_line_number(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.SourceLocation.line_number)
}
inline ::uint32_t SourceLocation::_internal_line_number() const {
  return _impl_.line_number_;
}
inline void SourceLocation::_internal_set_line_number(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.line_number_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_2epb_2eh
