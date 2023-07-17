// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/panel.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto;
namespace perfetto {
namespace protos {
class DsiCmdFifoStatusFtraceEvent;
struct DsiCmdFifoStatusFtraceEventDefaultTypeInternal;
extern DsiCmdFifoStatusFtraceEventDefaultTypeInternal _DsiCmdFifoStatusFtraceEvent_default_instance_;
class DsiRxFtraceEvent;
struct DsiRxFtraceEventDefaultTypeInternal;
extern DsiRxFtraceEventDefaultTypeInternal _DsiRxFtraceEvent_default_instance_;
class DsiTxFtraceEvent;
struct DsiTxFtraceEventDefaultTypeInternal;
extern DsiTxFtraceEventDefaultTypeInternal _DsiTxFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template <>
::perfetto::protos::DsiCmdFifoStatusFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::DsiCmdFifoStatusFtraceEvent>(Arena*);
template <>
::perfetto::protos::DsiRxFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::DsiRxFtraceEvent>(Arena*);
template <>
::perfetto::protos::DsiTxFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::DsiTxFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

namespace perfetto {
namespace protos {

// ===================================================================


// -------------------------------------------------------------------

class DsiCmdFifoStatusFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.DsiCmdFifoStatusFtraceEvent) */ {
 public:
  inline DsiCmdFifoStatusFtraceEvent() : DsiCmdFifoStatusFtraceEvent(nullptr) {}
  ~DsiCmdFifoStatusFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DsiCmdFifoStatusFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DsiCmdFifoStatusFtraceEvent(const DsiCmdFifoStatusFtraceEvent& from);
  DsiCmdFifoStatusFtraceEvent(DsiCmdFifoStatusFtraceEvent&& from) noexcept
    : DsiCmdFifoStatusFtraceEvent() {
    *this = ::std::move(from);
  }

  inline DsiCmdFifoStatusFtraceEvent& operator=(const DsiCmdFifoStatusFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline DsiCmdFifoStatusFtraceEvent& operator=(DsiCmdFifoStatusFtraceEvent&& from) noexcept {
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
  static const DsiCmdFifoStatusFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const DsiCmdFifoStatusFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const DsiCmdFifoStatusFtraceEvent*>(
               &_DsiCmdFifoStatusFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DsiCmdFifoStatusFtraceEvent& a, DsiCmdFifoStatusFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(DsiCmdFifoStatusFtraceEvent* other) {
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
  void UnsafeArenaSwap(DsiCmdFifoStatusFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DsiCmdFifoStatusFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DsiCmdFifoStatusFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DsiCmdFifoStatusFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DsiCmdFifoStatusFtraceEvent& from) {
    DsiCmdFifoStatusFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(DsiCmdFifoStatusFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.DsiCmdFifoStatusFtraceEvent";
  }
  protected:
  explicit DsiCmdFifoStatusFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kPayloadFieldNumber = 2,
  };
  // optional uint32 header = 1;
  bool has_header() const;
  void clear_header() ;
  ::uint32_t header() const;
  void set_header(::uint32_t value);

  private:
  ::uint32_t _internal_header() const;
  void _internal_set_header(::uint32_t value);

  public:
  // optional uint32 payload = 2;
  bool has_payload() const;
  void clear_payload() ;
  ::uint32_t payload() const;
  void set_payload(::uint32_t value);

  private:
  ::uint32_t _internal_payload() const;
  void _internal_set_payload(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.DsiCmdFifoStatusFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t header_;
    ::uint32_t payload_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto;
};// -------------------------------------------------------------------

class DsiRxFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.DsiRxFtraceEvent) */ {
 public:
  inline DsiRxFtraceEvent() : DsiRxFtraceEvent(nullptr) {}
  ~DsiRxFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DsiRxFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DsiRxFtraceEvent(const DsiRxFtraceEvent& from);
  DsiRxFtraceEvent(DsiRxFtraceEvent&& from) noexcept
    : DsiRxFtraceEvent() {
    *this = ::std::move(from);
  }

  inline DsiRxFtraceEvent& operator=(const DsiRxFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline DsiRxFtraceEvent& operator=(DsiRxFtraceEvent&& from) noexcept {
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
  static const DsiRxFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const DsiRxFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const DsiRxFtraceEvent*>(
               &_DsiRxFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DsiRxFtraceEvent& a, DsiRxFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(DsiRxFtraceEvent* other) {
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
  void UnsafeArenaSwap(DsiRxFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DsiRxFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DsiRxFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DsiRxFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DsiRxFtraceEvent& from) {
    DsiRxFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(DsiRxFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.DsiRxFtraceEvent";
  }
  protected:
  explicit DsiRxFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCmdFieldNumber = 1,
    kRxBufFieldNumber = 2,
  };
  // optional uint32 cmd = 1;
  bool has_cmd() const;
  void clear_cmd() ;
  ::uint32_t cmd() const;
  void set_cmd(::uint32_t value);

  private:
  ::uint32_t _internal_cmd() const;
  void _internal_set_cmd(::uint32_t value);

  public:
  // optional uint32 rx_buf = 2;
  bool has_rx_buf() const;
  void clear_rx_buf() ;
  ::uint32_t rx_buf() const;
  void set_rx_buf(::uint32_t value);

  private:
  ::uint32_t _internal_rx_buf() const;
  void _internal_set_rx_buf(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.DsiRxFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t cmd_;
    ::uint32_t rx_buf_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto;
};// -------------------------------------------------------------------

class DsiTxFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:perfetto.protos.DsiTxFtraceEvent) */ {
 public:
  inline DsiTxFtraceEvent() : DsiTxFtraceEvent(nullptr) {}
  ~DsiTxFtraceEvent() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR DsiTxFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DsiTxFtraceEvent(const DsiTxFtraceEvent& from);
  DsiTxFtraceEvent(DsiTxFtraceEvent&& from) noexcept
    : DsiTxFtraceEvent() {
    *this = ::std::move(from);
  }

  inline DsiTxFtraceEvent& operator=(const DsiTxFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline DsiTxFtraceEvent& operator=(DsiTxFtraceEvent&& from) noexcept {
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
  static const DsiTxFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const DsiTxFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const DsiTxFtraceEvent*>(
               &_DsiTxFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(DsiTxFtraceEvent& a, DsiTxFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(DsiTxFtraceEvent* other) {
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
  void UnsafeArenaSwap(DsiTxFtraceEvent* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DsiTxFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DsiTxFtraceEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const DsiTxFtraceEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const DsiTxFtraceEvent& from) {
    DsiTxFtraceEvent::MergeImpl(*this, from);
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
  void InternalSwap(DsiTxFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "perfetto.protos.DsiTxFtraceEvent";
  }
  protected:
  explicit DsiTxFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLastFieldNumber = 1,
    kTxBufFieldNumber = 2,
    kTypeFieldNumber = 3,
  };
  // optional uint32 last = 1;
  bool has_last() const;
  void clear_last() ;
  ::uint32_t last() const;
  void set_last(::uint32_t value);

  private:
  ::uint32_t _internal_last() const;
  void _internal_set_last(::uint32_t value);

  public:
  // optional uint32 tx_buf = 2;
  bool has_tx_buf() const;
  void clear_tx_buf() ;
  ::uint32_t tx_buf() const;
  void set_tx_buf(::uint32_t value);

  private:
  ::uint32_t _internal_tx_buf() const;
  void _internal_set_tx_buf(::uint32_t value);

  public:
  // optional uint32 type = 3;
  bool has_type() const;
  void clear_type() ;
  ::uint32_t type() const;
  void set_type(::uint32_t value);

  private:
  ::uint32_t _internal_type() const;
  void _internal_set_type(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:perfetto.protos.DsiTxFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t last_;
    ::uint32_t tx_buf_;
    ::uint32_t type_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// DsiCmdFifoStatusFtraceEvent

// optional uint32 header = 1;
inline bool DsiCmdFifoStatusFtraceEvent::has_header() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void DsiCmdFifoStatusFtraceEvent::clear_header() {
  _impl_.header_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t DsiCmdFifoStatusFtraceEvent::header() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiCmdFifoStatusFtraceEvent.header)
  return _internal_header();
}
inline void DsiCmdFifoStatusFtraceEvent::set_header(::uint32_t value) {
  _internal_set_header(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiCmdFifoStatusFtraceEvent.header)
}
inline ::uint32_t DsiCmdFifoStatusFtraceEvent::_internal_header() const {
  return _impl_.header_;
}
inline void DsiCmdFifoStatusFtraceEvent::_internal_set_header(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.header_ = value;
}

// optional uint32 payload = 2;
inline bool DsiCmdFifoStatusFtraceEvent::has_payload() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void DsiCmdFifoStatusFtraceEvent::clear_payload() {
  _impl_.payload_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t DsiCmdFifoStatusFtraceEvent::payload() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiCmdFifoStatusFtraceEvent.payload)
  return _internal_payload();
}
inline void DsiCmdFifoStatusFtraceEvent::set_payload(::uint32_t value) {
  _internal_set_payload(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiCmdFifoStatusFtraceEvent.payload)
}
inline ::uint32_t DsiCmdFifoStatusFtraceEvent::_internal_payload() const {
  return _impl_.payload_;
}
inline void DsiCmdFifoStatusFtraceEvent::_internal_set_payload(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.payload_ = value;
}

// -------------------------------------------------------------------

// DsiRxFtraceEvent

// optional uint32 cmd = 1;
inline bool DsiRxFtraceEvent::has_cmd() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void DsiRxFtraceEvent::clear_cmd() {
  _impl_.cmd_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t DsiRxFtraceEvent::cmd() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiRxFtraceEvent.cmd)
  return _internal_cmd();
}
inline void DsiRxFtraceEvent::set_cmd(::uint32_t value) {
  _internal_set_cmd(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiRxFtraceEvent.cmd)
}
inline ::uint32_t DsiRxFtraceEvent::_internal_cmd() const {
  return _impl_.cmd_;
}
inline void DsiRxFtraceEvent::_internal_set_cmd(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.cmd_ = value;
}

// optional uint32 rx_buf = 2;
inline bool DsiRxFtraceEvent::has_rx_buf() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void DsiRxFtraceEvent::clear_rx_buf() {
  _impl_.rx_buf_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t DsiRxFtraceEvent::rx_buf() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiRxFtraceEvent.rx_buf)
  return _internal_rx_buf();
}
inline void DsiRxFtraceEvent::set_rx_buf(::uint32_t value) {
  _internal_set_rx_buf(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiRxFtraceEvent.rx_buf)
}
inline ::uint32_t DsiRxFtraceEvent::_internal_rx_buf() const {
  return _impl_.rx_buf_;
}
inline void DsiRxFtraceEvent::_internal_set_rx_buf(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.rx_buf_ = value;
}

// -------------------------------------------------------------------

// DsiTxFtraceEvent

// optional uint32 last = 1;
inline bool DsiTxFtraceEvent::has_last() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void DsiTxFtraceEvent::clear_last() {
  _impl_.last_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t DsiTxFtraceEvent::last() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiTxFtraceEvent.last)
  return _internal_last();
}
inline void DsiTxFtraceEvent::set_last(::uint32_t value) {
  _internal_set_last(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiTxFtraceEvent.last)
}
inline ::uint32_t DsiTxFtraceEvent::_internal_last() const {
  return _impl_.last_;
}
inline void DsiTxFtraceEvent::_internal_set_last(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.last_ = value;
}

// optional uint32 tx_buf = 2;
inline bool DsiTxFtraceEvent::has_tx_buf() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void DsiTxFtraceEvent::clear_tx_buf() {
  _impl_.tx_buf_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t DsiTxFtraceEvent::tx_buf() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiTxFtraceEvent.tx_buf)
  return _internal_tx_buf();
}
inline void DsiTxFtraceEvent::set_tx_buf(::uint32_t value) {
  _internal_set_tx_buf(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiTxFtraceEvent.tx_buf)
}
inline ::uint32_t DsiTxFtraceEvent::_internal_tx_buf() const {
  return _impl_.tx_buf_;
}
inline void DsiTxFtraceEvent::_internal_set_tx_buf(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.tx_buf_ = value;
}

// optional uint32 type = 3;
inline bool DsiTxFtraceEvent::has_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void DsiTxFtraceEvent::clear_type() {
  _impl_.type_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t DsiTxFtraceEvent::type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DsiTxFtraceEvent.type)
  return _internal_type();
}
inline void DsiTxFtraceEvent::set_type(::uint32_t value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DsiTxFtraceEvent.type)
}
inline ::uint32_t DsiTxFtraceEvent::_internal_type() const {
  return _impl_.type_;
}
inline void DsiTxFtraceEvent::_internal_set_type(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.type_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fpanel_2eproto_2epb_2eh
