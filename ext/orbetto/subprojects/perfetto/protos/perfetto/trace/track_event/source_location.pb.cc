// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/source_location.proto

#include "protos/perfetto/trace/track_event/source_location.pb.h"

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
PROTOBUF_CONSTEXPR UnsymbolizedSourceLocation::UnsymbolizedSourceLocation(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.iid_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.mapping_id_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.rel_pc_)*/ ::uint64_t{0u}
} {}
struct UnsymbolizedSourceLocationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UnsymbolizedSourceLocationDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UnsymbolizedSourceLocationDefaultTypeInternal() {}
  union {
    UnsymbolizedSourceLocation _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UnsymbolizedSourceLocationDefaultTypeInternal _UnsymbolizedSourceLocation_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR SourceLocation::SourceLocation(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.file_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.function_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.iid_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.line_number_)*/ 0u
} {}
struct SourceLocationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SourceLocationDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SourceLocationDefaultTypeInternal() {}
  union {
    SourceLocation _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SourceLocationDefaultTypeInternal _SourceLocation_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UnsymbolizedSourceLocation, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UnsymbolizedSourceLocation, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UnsymbolizedSourceLocation, _impl_.iid_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UnsymbolizedSourceLocation, _impl_.mapping_id_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::UnsymbolizedSourceLocation, _impl_.rel_pc_),
    0,
    1,
    2,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SourceLocation, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SourceLocation, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SourceLocation, _impl_.iid_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SourceLocation, _impl_.file_name_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SourceLocation, _impl_.function_name_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SourceLocation, _impl_.line_number_),
    2,
    0,
    1,
    3,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 11, -1, sizeof(::perfetto::protos::UnsymbolizedSourceLocation)},
        { 14, 26, -1, sizeof(::perfetto::protos::SourceLocation)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_UnsymbolizedSourceLocation_default_instance_._instance,
    &::perfetto::protos::_SourceLocation_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n7protos/perfetto/trace/track_event/sour"
    "ce_location.proto\022\017perfetto.protos\"M\n\032Un"
    "symbolizedSourceLocation\022\013\n\003iid\030\001 \001(\004\022\022\n"
    "\nmapping_id\030\002 \001(\004\022\016\n\006rel_pc\030\003 \001(\004\"\\\n\016Sou"
    "rceLocation\022\013\n\003iid\030\001 \001(\004\022\021\n\tfile_name\030\002 "
    "\001(\t\022\025\n\rfunction_name\030\003 \001(\t\022\023\n\013line_numbe"
    "r\030\004 \001(\r"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto = {
    false,
    false,
    247,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto,
    "protos/perfetto/trace/track_event/source_location.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class UnsymbolizedSourceLocation::_Internal {
 public:
  using HasBits = decltype(std::declval<UnsymbolizedSourceLocation>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(UnsymbolizedSourceLocation, _impl_._has_bits_);
  static void set_has_iid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_mapping_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_rel_pc(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

UnsymbolizedSourceLocation::UnsymbolizedSourceLocation(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.UnsymbolizedSourceLocation)
}
UnsymbolizedSourceLocation::UnsymbolizedSourceLocation(const UnsymbolizedSourceLocation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.UnsymbolizedSourceLocation)
}

inline void UnsymbolizedSourceLocation::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.iid_) { ::uint64_t{0u} }

    , decltype(_impl_.mapping_id_) { ::uint64_t{0u} }

    , decltype(_impl_.rel_pc_) { ::uint64_t{0u} }

  };
}

UnsymbolizedSourceLocation::~UnsymbolizedSourceLocation() {
  // @@protoc_insertion_point(destructor:perfetto.protos.UnsymbolizedSourceLocation)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UnsymbolizedSourceLocation::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void UnsymbolizedSourceLocation::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UnsymbolizedSourceLocation::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.UnsymbolizedSourceLocation)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.iid_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.rel_pc_) -
        reinterpret_cast<char*>(&_impl_.iid_)) + sizeof(_impl_.rel_pc_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UnsymbolizedSourceLocation::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 iid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_iid(&has_bits);
          _impl_.iid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 mapping_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_mapping_id(&has_bits);
          _impl_.mapping_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 rel_pc = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_rel_pc(&has_bits);
          _impl_.rel_pc_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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

::uint8_t* UnsymbolizedSourceLocation::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.UnsymbolizedSourceLocation)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 iid = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_iid(), target);
  }

  // optional uint64 mapping_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        2, this->_internal_mapping_id(), target);
  }

  // optional uint64 rel_pc = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        3, this->_internal_rel_pc(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.UnsymbolizedSourceLocation)
  return target;
}

::size_t UnsymbolizedSourceLocation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.UnsymbolizedSourceLocation)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint64 iid = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_iid());
    }

    // optional uint64 mapping_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_mapping_id());
    }

    // optional uint64 rel_pc = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_rel_pc());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UnsymbolizedSourceLocation::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UnsymbolizedSourceLocation::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UnsymbolizedSourceLocation::GetClassData() const { return &_class_data_; }


void UnsymbolizedSourceLocation::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UnsymbolizedSourceLocation*>(&to_msg);
  auto& from = static_cast<const UnsymbolizedSourceLocation&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.UnsymbolizedSourceLocation)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.iid_ = from._impl_.iid_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.mapping_id_ = from._impl_.mapping_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.rel_pc_ = from._impl_.rel_pc_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UnsymbolizedSourceLocation::CopyFrom(const UnsymbolizedSourceLocation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.UnsymbolizedSourceLocation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UnsymbolizedSourceLocation::IsInitialized() const {
  return true;
}

void UnsymbolizedSourceLocation::InternalSwap(UnsymbolizedSourceLocation* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UnsymbolizedSourceLocation, _impl_.rel_pc_)
      + sizeof(UnsymbolizedSourceLocation::_impl_.rel_pc_)
      - PROTOBUF_FIELD_OFFSET(UnsymbolizedSourceLocation, _impl_.iid_)>(
          reinterpret_cast<char*>(&_impl_.iid_),
          reinterpret_cast<char*>(&other->_impl_.iid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UnsymbolizedSourceLocation::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto[0]);
}
// ===================================================================

class SourceLocation::_Internal {
 public:
  using HasBits = decltype(std::declval<SourceLocation>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(SourceLocation, _impl_._has_bits_);
  static void set_has_iid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_file_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_function_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_line_number(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

SourceLocation::SourceLocation(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SourceLocation)
}
SourceLocation::SourceLocation(const SourceLocation& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SourceLocation* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.file_name_) {}

    , decltype(_impl_.function_name_) {}

    , decltype(_impl_.iid_) {}

    , decltype(_impl_.line_number_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.file_name_.Set(from._internal_file_name(), _this->GetArenaForAllocation());
  }
  _impl_.function_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.function_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.function_name_.Set(from._internal_function_name(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.iid_, &from._impl_.iid_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.line_number_) -
    reinterpret_cast<char*>(&_impl_.iid_)) + sizeof(_impl_.line_number_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SourceLocation)
}

inline void SourceLocation::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.file_name_) {}

    , decltype(_impl_.function_name_) {}

    , decltype(_impl_.iid_) { ::uint64_t{0u} }

    , decltype(_impl_.line_number_) { 0u }

  };
  _impl_.file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.file_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.function_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.function_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SourceLocation::~SourceLocation() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SourceLocation)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SourceLocation::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.file_name_.Destroy();
  _impl_.function_name_.Destroy();
}

void SourceLocation::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SourceLocation::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SourceLocation)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.file_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.function_name_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&_impl_.iid_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.line_number_) -
        reinterpret_cast<char*>(&_impl_.iid_)) + sizeof(_impl_.line_number_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SourceLocation::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 iid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_iid(&has_bits);
          _impl_.iid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string file_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_file_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.SourceLocation.file_name");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string function_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_function_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.SourceLocation.function_name");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 line_number = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _Internal::set_has_line_number(&has_bits);
          _impl_.line_number_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

::uint8_t* SourceLocation::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SourceLocation)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 iid = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        1, this->_internal_iid(), target);
  }

  // optional string file_name = 2;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_file_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.SourceLocation.file_name");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // optional string function_name = 3;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_function_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.SourceLocation.function_name");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional uint32 line_number = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        4, this->_internal_line_number(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SourceLocation)
  return target;
}

::size_t SourceLocation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SourceLocation)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string file_name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_file_name());
    }

    // optional string function_name = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_function_name());
    }

    // optional uint64 iid = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_iid());
    }

    // optional uint32 line_number = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_line_number());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SourceLocation::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SourceLocation::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SourceLocation::GetClassData() const { return &_class_data_; }


void SourceLocation::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SourceLocation*>(&to_msg);
  auto& from = static_cast<const SourceLocation&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SourceLocation)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_file_name(from._internal_file_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_function_name(from._internal_function_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.iid_ = from._impl_.iid_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.line_number_ = from._impl_.line_number_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SourceLocation::CopyFrom(const SourceLocation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SourceLocation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceLocation::IsInitialized() const {
  return true;
}

void SourceLocation::InternalSwap(SourceLocation* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.file_name_, lhs_arena,
                                       &other->_impl_.file_name_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.function_name_, lhs_arena,
                                       &other->_impl_.function_name_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SourceLocation, _impl_.line_number_)
      + sizeof(SourceLocation::_impl_.line_number_)
      - PROTOBUF_FIELD_OFFSET(SourceLocation, _impl_.iid_)>(
          reinterpret_cast<char*>(&_impl_.iid_),
          reinterpret_cast<char*>(&other->_impl_.iid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SourceLocation::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fsource_5flocation_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::UnsymbolizedSourceLocation*
Arena::CreateMaybeMessage< ::perfetto::protos::UnsymbolizedSourceLocation >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::UnsymbolizedSourceLocation >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::SourceLocation*
Arena::CreateMaybeMessage< ::perfetto::protos::SourceLocation >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SourceLocation >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
