// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/gpu/gpu_log.proto

#include "protos/perfetto/trace/gpu/gpu_log.pb.h"

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
PROTOBUF_CONSTEXPR GpuLog::GpuLog(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.tag_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.log_message_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.severity_)*/ 0
} {}
struct GpuLogDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GpuLogDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GpuLogDefaultTypeInternal() {}
  union {
    GpuLog _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GpuLogDefaultTypeInternal _GpuLog_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuLog, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuLog, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuLog, _impl_.severity_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuLog, _impl_.tag_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::GpuLog, _impl_.log_message_),
    2,
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 11, -1, sizeof(::perfetto::protos::GpuLog)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_GpuLog_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\'protos/perfetto/trace/gpu/gpu_log.prot"
    "o\022\017perfetto.protos\"\204\002\n\006GpuLog\0222\n\010severit"
    "y\030\001 \001(\0162 .perfetto.protos.GpuLog.Severit"
    "y\022\013\n\003tag\030\002 \001(\t\022\023\n\013log_message\030\003 \001(\t\"\243\001\n\010"
    "Severity\022\034\n\030LOG_SEVERITY_UNSPECIFIED\020\000\022\030"
    "\n\024LOG_SEVERITY_VERBOSE\020\001\022\026\n\022LOG_SEVERITY"
    "_DEBUG\020\002\022\025\n\021LOG_SEVERITY_INFO\020\003\022\030\n\024LOG_S"
    "EVERITY_WARNING\020\004\022\026\n\022LOG_SEVERITY_ERROR\020"
    "\005"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto = {
    false,
    false,
    321,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto,
    "protos/perfetto/trace/gpu/gpu_log.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto);
namespace perfetto {
namespace protos {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GpuLog_Severity_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto);
  return file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto[0];
}
bool GpuLog_Severity_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr GpuLog_Severity GpuLog::LOG_SEVERITY_UNSPECIFIED;
constexpr GpuLog_Severity GpuLog::LOG_SEVERITY_VERBOSE;
constexpr GpuLog_Severity GpuLog::LOG_SEVERITY_DEBUG;
constexpr GpuLog_Severity GpuLog::LOG_SEVERITY_INFO;
constexpr GpuLog_Severity GpuLog::LOG_SEVERITY_WARNING;
constexpr GpuLog_Severity GpuLog::LOG_SEVERITY_ERROR;
constexpr GpuLog_Severity GpuLog::Severity_MIN;
constexpr GpuLog_Severity GpuLog::Severity_MAX;
constexpr int GpuLog::Severity_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class GpuLog::_Internal {
 public:
  using HasBits = decltype(std::declval<GpuLog>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GpuLog, _impl_._has_bits_);
  static void set_has_severity(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_tag(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_log_message(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

GpuLog::GpuLog(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.GpuLog)
}
GpuLog::GpuLog(const GpuLog& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GpuLog* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.tag_) {}

    , decltype(_impl_.log_message_) {}

    , decltype(_impl_.severity_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.tag_.Set(from._internal_tag(), _this->GetArenaForAllocation());
  }
  _impl_.log_message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.log_message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.log_message_.Set(from._internal_log_message(), _this->GetArenaForAllocation());
  }
  _this->_impl_.severity_ = from._impl_.severity_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.GpuLog)
}

inline void GpuLog::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.tag_) {}

    , decltype(_impl_.log_message_) {}

    , decltype(_impl_.severity_) { 0 }

  };
  _impl_.tag_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.tag_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.log_message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.log_message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GpuLog::~GpuLog() {
  // @@protoc_insertion_point(destructor:perfetto.protos.GpuLog)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GpuLog::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.tag_.Destroy();
  _impl_.log_message_.Destroy();
}

void GpuLog::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GpuLog::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.GpuLog)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.tag_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.log_message_.ClearNonDefaultToEmpty();
    }
  }
  _impl_.severity_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GpuLog::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.GpuLog.Severity severity = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          ::int32_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::GpuLog_Severity_IsValid(static_cast<int>(val)))) {
            _internal_set_severity(static_cast<::perfetto::protos::GpuLog_Severity>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string tag = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_tag();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.GpuLog.tag");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string log_message = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_log_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.GpuLog.log_message");
          #endif  // !NDEBUG
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

::uint8_t* GpuLog::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.GpuLog)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.GpuLog.Severity severity = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_severity(), target);
  }

  // optional string tag = 2;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_tag();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.GpuLog.tag");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // optional string log_message = 3;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_log_message();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.GpuLog.log_message");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.GpuLog)
  return target;
}

::size_t GpuLog::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.GpuLog)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string tag = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_tag());
    }

    // optional string log_message = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_log_message());
    }

    // optional .perfetto.protos.GpuLog.Severity severity = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_severity());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GpuLog::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GpuLog::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GpuLog::GetClassData() const { return &_class_data_; }


void GpuLog::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GpuLog*>(&to_msg);
  auto& from = static_cast<const GpuLog&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.GpuLog)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_tag(from._internal_tag());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_log_message(from._internal_log_message());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.severity_ = from._impl_.severity_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GpuLog::CopyFrom(const GpuLog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.GpuLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GpuLog::IsInitialized() const {
  return true;
}

void GpuLog::InternalSwap(GpuLog* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.tag_, lhs_arena,
                                       &other->_impl_.tag_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.log_message_, lhs_arena,
                                       &other->_impl_.log_message_, rhs_arena);
  swap(_impl_.severity_, other->_impl_.severity_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GpuLog::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fgpu_2fgpu_5flog_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::GpuLog*
Arena::CreateMaybeMessage< ::perfetto::protos::GpuLog >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::GpuLog >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
