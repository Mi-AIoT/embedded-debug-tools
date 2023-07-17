// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/perfetto/tracing_service_event.proto

#include "protos/perfetto/trace/perfetto/tracing_service_event.pb.h"

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
PROTOBUF_CONSTEXPR TracingServiceEvent::TracingServiceEvent(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.event_type_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct TracingServiceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TracingServiceEventDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TracingServiceEventDefaultTypeInternal() {}
  union {
    TracingServiceEvent _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TracingServiceEventDefaultTypeInternal _TracingServiceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TracingServiceEvent, _internal_metadata_),
    ~0u,  // no _extensions_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TracingServiceEvent, _impl_._oneof_case_[0]),
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    ::_pbi::kInvalidFieldOffsetTag,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TracingServiceEvent, _impl_.event_type_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::perfetto::protos::TracingServiceEvent)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_TracingServiceEvent_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n:protos/perfetto/trace/perfetto/tracing"
    "_service_event.proto\022\017perfetto.protos\"\354\001"
    "\n\023TracingServiceEvent\022\031\n\017tracing_started"
    "\030\002 \001(\010H\000\022\"\n\030all_data_sources_started\030\001 \001"
    "(\010H\000\022\"\n\030all_data_sources_flushed\030\003 \001(\010H\000"
    "\022(\n\036read_tracing_buffers_completed\030\004 \001(\010"
    "H\000\022\032\n\020tracing_disabled\030\005 \001(\010H\000\022\036\n\024seized"
    "_for_bugreport\030\006 \001(\010H\000B\014\n\nevent_type"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto = {
    false,
    false,
    316,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto,
    "protos/perfetto/trace/perfetto/tracing_service_event.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class TracingServiceEvent::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TracingServiceEvent, _impl_._oneof_case_);
};

TracingServiceEvent::TracingServiceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TracingServiceEvent)
}
TracingServiceEvent::TracingServiceEvent(const TracingServiceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TracingServiceEvent* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.event_type_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  clear_has_event_type();
  switch (from.event_type_case()) {
    case kTracingStarted: {
      _this->_internal_set_tracing_started(from._internal_tracing_started());
      break;
    }
    case kAllDataSourcesStarted: {
      _this->_internal_set_all_data_sources_started(from._internal_all_data_sources_started());
      break;
    }
    case kAllDataSourcesFlushed: {
      _this->_internal_set_all_data_sources_flushed(from._internal_all_data_sources_flushed());
      break;
    }
    case kReadTracingBuffersCompleted: {
      _this->_internal_set_read_tracing_buffers_completed(from._internal_read_tracing_buffers_completed());
      break;
    }
    case kTracingDisabled: {
      _this->_internal_set_tracing_disabled(from._internal_tracing_disabled());
      break;
    }
    case kSeizedForBugreport: {
      _this->_internal_set_seized_for_bugreport(from._internal_seized_for_bugreport());
      break;
    }
    case EVENT_TYPE_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TracingServiceEvent)
}

inline void TracingServiceEvent::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.event_type_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  clear_has_event_type();
}

TracingServiceEvent::~TracingServiceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TracingServiceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TracingServiceEvent::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  if (has_event_type()) {
    clear_event_type();
  }
}

void TracingServiceEvent::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TracingServiceEvent::clear_event_type() {
// @@protoc_insertion_point(one_of_clear_start:perfetto.protos.TracingServiceEvent)
  switch (event_type_case()) {
    case kTracingStarted: {
      // No need to clear
      break;
    }
    case kAllDataSourcesStarted: {
      // No need to clear
      break;
    }
    case kAllDataSourcesFlushed: {
      // No need to clear
      break;
    }
    case kReadTracingBuffersCompleted: {
      // No need to clear
      break;
    }
    case kTracingDisabled: {
      // No need to clear
      break;
    }
    case kSeizedForBugreport: {
      // No need to clear
      break;
    }
    case EVENT_TYPE_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = EVENT_TYPE_NOT_SET;
}


void TracingServiceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TracingServiceEvent)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_event_type();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TracingServiceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool all_data_sources_started = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _internal_set_all_data_sources_started(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool tracing_started = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _internal_set_tracing_started(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool all_data_sources_flushed = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _internal_set_all_data_sources_flushed(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool read_tracing_buffers_completed = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 32)) {
          _internal_set_read_tracing_buffers_completed(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool tracing_disabled = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _internal_set_tracing_disabled(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // bool seized_for_bugreport = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 48)) {
          _internal_set_seized_for_bugreport(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* TracingServiceEvent::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TracingServiceEvent)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (event_type_case()) {
    case kAllDataSourcesStarted: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          1, this->_internal_all_data_sources_started(), target);
      break;
    }
    case kTracingStarted: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          2, this->_internal_tracing_started(), target);
      break;
    }
    case kAllDataSourcesFlushed: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          3, this->_internal_all_data_sources_flushed(), target);
      break;
    }
    case kReadTracingBuffersCompleted: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          4, this->_internal_read_tracing_buffers_completed(), target);
      break;
    }
    case kTracingDisabled: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          5, this->_internal_tracing_disabled(), target);
      break;
    }
    case kSeizedForBugreport: {
      target = stream->EnsureSpace(target);
      target = ::_pbi::WireFormatLite::WriteBoolToArray(
          6, this->_internal_seized_for_bugreport(), target);
      break;
    }
    default: ;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TracingServiceEvent)
  return target;
}

::size_t TracingServiceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TracingServiceEvent)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (event_type_case()) {
    // bool tracing_started = 2;
    case kTracingStarted: {
      total_size += 2;
      break;
    }
    // bool all_data_sources_started = 1;
    case kAllDataSourcesStarted: {
      total_size += 2;
      break;
    }
    // bool all_data_sources_flushed = 3;
    case kAllDataSourcesFlushed: {
      total_size += 2;
      break;
    }
    // bool read_tracing_buffers_completed = 4;
    case kReadTracingBuffersCompleted: {
      total_size += 2;
      break;
    }
    // bool tracing_disabled = 5;
    case kTracingDisabled: {
      total_size += 2;
      break;
    }
    // bool seized_for_bugreport = 6;
    case kSeizedForBugreport: {
      total_size += 2;
      break;
    }
    case EVENT_TYPE_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TracingServiceEvent::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TracingServiceEvent::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TracingServiceEvent::GetClassData() const { return &_class_data_; }


void TracingServiceEvent::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TracingServiceEvent*>(&to_msg);
  auto& from = static_cast<const TracingServiceEvent&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TracingServiceEvent)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.event_type_case()) {
    case kTracingStarted: {
      _this->_internal_set_tracing_started(from._internal_tracing_started());
      break;
    }
    case kAllDataSourcesStarted: {
      _this->_internal_set_all_data_sources_started(from._internal_all_data_sources_started());
      break;
    }
    case kAllDataSourcesFlushed: {
      _this->_internal_set_all_data_sources_flushed(from._internal_all_data_sources_flushed());
      break;
    }
    case kReadTracingBuffersCompleted: {
      _this->_internal_set_read_tracing_buffers_completed(from._internal_read_tracing_buffers_completed());
      break;
    }
    case kTracingDisabled: {
      _this->_internal_set_tracing_disabled(from._internal_tracing_disabled());
      break;
    }
    case kSeizedForBugreport: {
      _this->_internal_set_seized_for_bugreport(from._internal_seized_for_bugreport());
      break;
    }
    case EVENT_TYPE_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TracingServiceEvent::CopyFrom(const TracingServiceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TracingServiceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TracingServiceEvent::IsInitialized() const {
  return true;
}

void TracingServiceEvent::InternalSwap(TracingServiceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.event_type_, other->_impl_.event_type_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata TracingServiceEvent::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fperfetto_2ftracing_5fservice_5fevent_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TracingServiceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::TracingServiceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TracingServiceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
