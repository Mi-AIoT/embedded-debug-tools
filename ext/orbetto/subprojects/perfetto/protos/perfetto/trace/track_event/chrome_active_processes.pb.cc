// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_active_processes.proto

#include "protos/perfetto/trace/track_event/chrome_active_processes.pb.h"

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
PROTOBUF_CONSTEXPR ChromeActiveProcesses::ChromeActiveProcesses(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.pid_)*/ {}

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ChromeActiveProcessesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeActiveProcessesDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeActiveProcessesDefaultTypeInternal() {}
  union {
    ChromeActiveProcesses _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeActiveProcessesDefaultTypeInternal _ChromeActiveProcesses_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeActiveProcesses, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::ChromeActiveProcesses, _impl_.pid_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::perfetto::protos::ChromeActiveProcesses)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_ChromeActiveProcesses_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\?protos/perfetto/trace/track_event/chro"
    "me_active_processes.proto\022\017perfetto.prot"
    "os\"$\n\025ChromeActiveProcesses\022\013\n\003pid\030\001 \003(\005"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto = {
    false,
    false,
    120,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto,
    "protos/perfetto/trace/track_event/chrome_active_processes.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class ChromeActiveProcesses::_Internal {
 public:
};

ChromeActiveProcesses::ChromeActiveProcesses(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeActiveProcesses)
}
ChromeActiveProcesses::ChromeActiveProcesses(const ChromeActiveProcesses& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ChromeActiveProcesses* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.pid_) { from._impl_.pid_ }

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeActiveProcesses)
}

inline void ChromeActiveProcesses::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.pid_) { arena }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ChromeActiveProcesses::~ChromeActiveProcesses() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeActiveProcesses)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeActiveProcesses::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.pid_.~RepeatedField();
}

void ChromeActiveProcesses::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChromeActiveProcesses::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeActiveProcesses)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_pid()->Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChromeActiveProcesses::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_pid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8>(ptr));
        } else if (static_cast<::uint8_t>(tag) == 10) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_pid(), ptr, ctx);
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

::uint8_t* ChromeActiveProcesses::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeActiveProcesses)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 pid = 1;
  for (int i = 0, n = this->_internal_pid_size(); i < n; ++i) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_pid(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeActiveProcesses)
  return target;
}

::size_t ChromeActiveProcesses::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeActiveProcesses)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 pid = 1;
  {
    std::size_t data_size = ::_pbi::WireFormatLite::Int32Size(
        this->_internal_pid())
    ;
    std::size_t tag_size = std::size_t{1} *
        ::_pbi::FromIntSize(this->_internal_pid_size());
    ;
    total_size += tag_size + data_size;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChromeActiveProcesses::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChromeActiveProcesses::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChromeActiveProcesses::GetClassData() const { return &_class_data_; }


void ChromeActiveProcesses::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChromeActiveProcesses*>(&to_msg);
  auto& from = static_cast<const ChromeActiveProcesses&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeActiveProcesses)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.pid_.MergeFrom(from._impl_.pid_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChromeActiveProcesses::CopyFrom(const ChromeActiveProcesses& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeActiveProcesses)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeActiveProcesses::IsInitialized() const {
  return true;
}

void ChromeActiveProcesses::InternalSwap(ChromeActiveProcesses* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.pid_.InternalSwap(&other->_impl_.pid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ChromeActiveProcesses::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeActiveProcesses*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeActiveProcesses >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeActiveProcesses >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
