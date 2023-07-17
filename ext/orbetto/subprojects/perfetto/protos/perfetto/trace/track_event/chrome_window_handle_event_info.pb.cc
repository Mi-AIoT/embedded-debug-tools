// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_window_handle_event_info.proto

#include "protos/perfetto/trace/track_event/chrome_window_handle_event_info.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace perfetto {
namespace protos {
template <typename>
PROTOBUF_CONSTEXPR ChromeWindowHandleEventInfo::ChromeWindowHandleEventInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.dpi_)*/ 0u

  , /*decltype(_impl_.message_id_)*/ 0u

  , /*decltype(_impl_.hwnd_ptr_)*/ ::uint64_t{0u}
} {}
struct ChromeWindowHandleEventInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeWindowHandleEventInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeWindowHandleEventInfoDefaultTypeInternal() {}
  union {
    ChromeWindowHandleEventInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeWindowHandleEventInfoDefaultTypeInternal _ChromeWindowHandleEventInfo_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeWindowHandleEventInfo, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeWindowHandleEventInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeWindowHandleEventInfo, _impl_.dpi_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeWindowHandleEventInfo, _impl_.message_id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeWindowHandleEventInfo, _impl_.hwnd_ptr_),
    0,
    1,
    2,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 11, -1, sizeof(::perfetto::protos::ChromeWindowHandleEventInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ChromeWindowHandleEventInfo_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\nGprotos/perfetto/trace/track_event/chro"
    "me_window_handle_event_info.proto\022\017perfe"
    "tto.protos\"P\n\033ChromeWindowHandleEventInf"
    "o\022\013\n\003dpi\030\001 \001(\r\022\022\n\nmessage_id\030\002 \001(\r\022\020\n\010hw"
    "nd_ptr\030\003 \001(\006"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto = {
    false,
    false,
    172,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto,
    "protos/perfetto/trace/track_event/chrome_window_handle_event_info.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class ChromeWindowHandleEventInfo::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeWindowHandleEventInfo>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(ChromeWindowHandleEventInfo, _impl_._has_bits_);
  static void set_has_dpi(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_message_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_hwnd_ptr(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ChromeWindowHandleEventInfo::ChromeWindowHandleEventInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeWindowHandleEventInfo)
}
ChromeWindowHandleEventInfo::ChromeWindowHandleEventInfo(const ChromeWindowHandleEventInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeWindowHandleEventInfo)
}

inline void ChromeWindowHandleEventInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.dpi_) { 0u }

    , decltype(_impl_.message_id_) { 0u }

    , decltype(_impl_.hwnd_ptr_) { ::uint64_t{0u} }

  };
}

ChromeWindowHandleEventInfo::~ChromeWindowHandleEventInfo() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeWindowHandleEventInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeWindowHandleEventInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void ChromeWindowHandleEventInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeWindowHandleEventInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeWindowHandleEventInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.dpi_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.hwnd_ptr_) -
        reinterpret_cast<char*>(&_impl_.dpi_)) + sizeof(_impl_.hwnd_ptr_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChromeWindowHandleEventInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 dpi = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_dpi(&has_bits);
          _impl_.dpi_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 message_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_message_id(&has_bits);
          _impl_.message_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional fixed64 hwnd_ptr = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 25)) {
          _Internal::set_has_hwnd_ptr(&has_bits);
          _impl_.hwnd_ptr_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::uint64_t>(ptr);
          ptr += sizeof(::uint64_t);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ChromeWindowHandleEventInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeWindowHandleEventInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint32 dpi = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_dpi(), target);
  }

  // optional uint32 message_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_message_id(), target);
  }

  // optional fixed64 hwnd_ptr = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed64ToArray(
        3, this->_internal_hwnd_ptr(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeWindowHandleEventInfo)
  return target;
}

::size_t ChromeWindowHandleEventInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeWindowHandleEventInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint32 dpi = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_dpi());
    }

    // optional uint32 message_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_message_id());
    }

    // optional fixed64 hwnd_ptr = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 9;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChromeWindowHandleEventInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChromeWindowHandleEventInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChromeWindowHandleEventInfo::GetClassData() const { return &_class_data_; }


void ChromeWindowHandleEventInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChromeWindowHandleEventInfo*>(&to_msg);
  auto& from = static_cast<const ChromeWindowHandleEventInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeWindowHandleEventInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.dpi_ = from._impl_.dpi_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.message_id_ = from._impl_.message_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.hwnd_ptr_ = from._impl_.hwnd_ptr_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChromeWindowHandleEventInfo::CopyFrom(const ChromeWindowHandleEventInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeWindowHandleEventInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeWindowHandleEventInfo::IsInitialized() const {
  return true;
}

void ChromeWindowHandleEventInfo::InternalSwap(ChromeWindowHandleEventInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeWindowHandleEventInfo, _impl_.hwnd_ptr_)
      + sizeof(ChromeWindowHandleEventInfo::_impl_.hwnd_ptr_)
      - PROTOBUF_FIELD_OFFSET(ChromeWindowHandleEventInfo, _impl_.dpi_)>(
          reinterpret_cast<char*>(&_impl_.dpi_),
          reinterpret_cast<char*>(&other->_impl_.dpi_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ChromeWindowHandleEventInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fwindow_5fhandle_5fevent_5finfo_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeWindowHandleEventInfo*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeWindowHandleEventInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeWindowHandleEventInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
