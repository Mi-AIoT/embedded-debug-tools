// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/trace_uuid.proto

#include "protos/perfetto/trace/trace_uuid.pb.h"

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
PROTOBUF_CONSTEXPR TraceUuid::TraceUuid(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.msb_)*/ ::int64_t{0}

  , /*decltype(_impl_.lsb_)*/ ::int64_t{0}
} {}
struct TraceUuidDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TraceUuidDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TraceUuidDefaultTypeInternal() {}
  union {
    TraceUuid _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TraceUuidDefaultTypeInternal _TraceUuid_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TraceUuid, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TraceUuid, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TraceUuid, _impl_.msb_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TraceUuid, _impl_.lsb_),
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::TraceUuid)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_TraceUuid_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&protos/perfetto/trace/trace_uuid.proto"
    "\022\017perfetto.protos\"%\n\tTraceUuid\022\013\n\003msb\030\001 "
    "\001(\003\022\013\n\003lsb\030\002 \001(\003"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto = {
    false,
    false,
    96,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto,
    "protos/perfetto/trace/trace_uuid.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class TraceUuid::_Internal {
 public:
  using HasBits = decltype(std::declval<TraceUuid>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(TraceUuid, _impl_._has_bits_);
  static void set_has_msb(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_lsb(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

TraceUuid::TraceUuid(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TraceUuid)
}
TraceUuid::TraceUuid(const TraceUuid& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TraceUuid)
}

inline void TraceUuid::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.msb_) { ::int64_t{0} }

    , decltype(_impl_.lsb_) { ::int64_t{0} }

  };
}

TraceUuid::~TraceUuid() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TraceUuid)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TraceUuid::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void TraceUuid::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TraceUuid::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TraceUuid)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.msb_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.lsb_) -
        reinterpret_cast<char*>(&_impl_.msb_)) + sizeof(_impl_.lsb_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TraceUuid::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 msb = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_msb(&has_bits);
          _impl_.msb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 lsb = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _Internal::set_has_lsb(&has_bits);
          _impl_.lsb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* TraceUuid::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TraceUuid)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 msb = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        1, this->_internal_msb(), target);
  }

  // optional int64 lsb = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        2, this->_internal_lsb(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TraceUuid)
  return target;
}

::size_t TraceUuid::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TraceUuid)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int64 msb = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_msb());
    }

    // optional int64 lsb = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_lsb());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TraceUuid::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TraceUuid::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TraceUuid::GetClassData() const { return &_class_data_; }


void TraceUuid::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TraceUuid*>(&to_msg);
  auto& from = static_cast<const TraceUuid&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TraceUuid)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.msb_ = from._impl_.msb_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.lsb_ = from._impl_.lsb_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TraceUuid::CopyFrom(const TraceUuid& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TraceUuid)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TraceUuid::IsInitialized() const {
  return true;
}

void TraceUuid::InternalSwap(TraceUuid* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TraceUuid, _impl_.lsb_)
      + sizeof(TraceUuid::_impl_.lsb_)
      - PROTOBUF_FIELD_OFFSET(TraceUuid, _impl_.msb_)>(
          reinterpret_cast<char*>(&_impl_.msb_),
          reinterpret_cast<char*>(&other->_impl_.msb_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TraceUuid::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrace_5fuuid_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TraceUuid*
Arena::CreateMaybeMessage< ::perfetto::protos::TraceUuid >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TraceUuid >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
