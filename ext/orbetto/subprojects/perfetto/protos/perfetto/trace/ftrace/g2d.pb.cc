// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/g2d.proto

#include "protos/perfetto/trace/ftrace/g2d.pb.h"

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
PROTOBUF_CONSTEXPR G2dTracingMarkWriteFtraceEvent::G2dTracingMarkWriteFtraceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.pid_)*/ 0

  , /*decltype(_impl_.type_)*/ 0u

  , /*decltype(_impl_.value_)*/ 0
} {}
struct G2dTracingMarkWriteFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR G2dTracingMarkWriteFtraceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~G2dTracingMarkWriteFtraceEventDefaultTypeInternal() {}
  union {
    G2dTracingMarkWriteFtraceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 G2dTracingMarkWriteFtraceEventDefaultTypeInternal _G2dTracingMarkWriteFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::G2dTracingMarkWriteFtraceEvent, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::G2dTracingMarkWriteFtraceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::G2dTracingMarkWriteFtraceEvent, _impl_.pid_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::G2dTracingMarkWriteFtraceEvent, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::G2dTracingMarkWriteFtraceEvent, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::G2dTracingMarkWriteFtraceEvent, _impl_.value_),
    1,
    0,
    2,
    3,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::perfetto::protos::G2dTracingMarkWriteFtraceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_G2dTracingMarkWriteFtraceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n&protos/perfetto/trace/ftrace/g2d.proto"
    "\022\017perfetto.protos\"X\n\036G2dTracingMarkWrite"
    "FtraceEvent\022\013\n\003pid\030\001 \001(\005\022\014\n\004name\030\004 \001(\t\022\014"
    "\n\004type\030\005 \001(\r\022\r\n\005value\030\006 \001(\005"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto = {
    false,
    false,
    147,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto,
    "protos/perfetto/trace/ftrace/g2d.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class G2dTracingMarkWriteFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<G2dTracingMarkWriteFtraceEvent>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(G2dTracingMarkWriteFtraceEvent, _impl_._has_bits_);
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

G2dTracingMarkWriteFtraceEvent::G2dTracingMarkWriteFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
}
G2dTracingMarkWriteFtraceEvent::G2dTracingMarkWriteFtraceEvent(const G2dTracingMarkWriteFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  G2dTracingMarkWriteFtraceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_) {}

    , decltype(_impl_.pid_) {}

    , decltype(_impl_.type_) {}

    , decltype(_impl_.value_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.name_.Set(from._internal_name(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.pid_, &from._impl_.pid_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.value_) -
    reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.value_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
}

inline void G2dTracingMarkWriteFtraceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_) {}

    , decltype(_impl_.pid_) { 0 }

    , decltype(_impl_.type_) { 0u }

    , decltype(_impl_.value_) { 0 }

  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

G2dTracingMarkWriteFtraceEvent::~G2dTracingMarkWriteFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void G2dTracingMarkWriteFtraceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
}

void G2dTracingMarkWriteFtraceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void G2dTracingMarkWriteFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000000eu) {
    ::memset(&_impl_.pid_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.value_) -
        reinterpret_cast<char*>(&_impl_.pid_)) + sizeof(_impl_.value_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* G2dTracingMarkWriteFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _Internal::set_has_pid(&has_bits);
          _impl_.pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.G2dTracingMarkWriteFtraceEvent.name");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 type = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_type(&has_bits);
          _impl_.type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int32 value = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 48)) {
          _Internal::set_has_value(&has_bits);
          _impl_.value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::uint8_t* G2dTracingMarkWriteFtraceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 pid = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_pid(), target);
  }

  // optional string name = 4;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.G2dTracingMarkWriteFtraceEvent.name");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  // optional uint32 type = 5;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_type(), target);
  }

  // optional int32 value = 6;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        6, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  return target;
}

::size_t G2dTracingMarkWriteFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string name = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_name());
    }

    // optional int32 pid = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_pid());
    }

    // optional uint32 type = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_type());
    }

    // optional int32 value = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_value());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData G2dTracingMarkWriteFtraceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    G2dTracingMarkWriteFtraceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*G2dTracingMarkWriteFtraceEvent::GetClassData() const { return &_class_data_; }


void G2dTracingMarkWriteFtraceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<G2dTracingMarkWriteFtraceEvent*>(&to_msg);
  auto& from = static_cast<const G2dTracingMarkWriteFtraceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.pid_ = from._impl_.pid_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.type_ = from._impl_.type_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.value_ = from._impl_.value_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void G2dTracingMarkWriteFtraceEvent::CopyFrom(const G2dTracingMarkWriteFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.G2dTracingMarkWriteFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool G2dTracingMarkWriteFtraceEvent::IsInitialized() const {
  return true;
}

void G2dTracingMarkWriteFtraceEvent::InternalSwap(G2dTracingMarkWriteFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, lhs_arena,
                                       &other->_impl_.name_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(G2dTracingMarkWriteFtraceEvent, _impl_.value_)
      + sizeof(G2dTracingMarkWriteFtraceEvent::_impl_.value_)
      - PROTOBUF_FIELD_OFFSET(G2dTracingMarkWriteFtraceEvent, _impl_.pid_)>(
          reinterpret_cast<char*>(&_impl_.pid_),
          reinterpret_cast<char*>(&other->_impl_.pid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata G2dTracingMarkWriteFtraceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fftrace_2fg2d_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::G2dTracingMarkWriteFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::G2dTracingMarkWriteFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::G2dTracingMarkWriteFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
