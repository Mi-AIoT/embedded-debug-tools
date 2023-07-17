// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/system_info.proto

#include "protos/perfetto/trace/system_info.pb.h"

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
PROTOBUF_CONSTEXPR Utsname::Utsname(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.sysname_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.version_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.release_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.machine_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }
} {}
struct UtsnameDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UtsnameDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~UtsnameDefaultTypeInternal() {}
  union {
    Utsname _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UtsnameDefaultTypeInternal _Utsname_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR SystemInfo::SystemInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.android_build_fingerprint_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.tracing_service_version_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.utsname_)*/nullptr
  , /*decltype(_impl_.hz_)*/ ::int64_t{0}

  , /*decltype(_impl_.android_sdk_version_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.page_size_)*/ 0u
} {}
struct SystemInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SystemInfoDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~SystemInfoDefaultTypeInternal() {}
  union {
    SystemInfo _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SystemInfoDefaultTypeInternal _SystemInfo_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::Utsname, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::Utsname, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::Utsname, _impl_.sysname_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::Utsname, _impl_.version_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::Utsname, _impl_.release_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::Utsname, _impl_.machine_),
    0,
    1,
    2,
    3,
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_.utsname_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_.android_build_fingerprint_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_.hz_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_.tracing_service_version_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_.android_sdk_version_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::SystemInfo, _impl_.page_size_),
    2,
    0,
    3,
    1,
    4,
    5,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 12, -1, sizeof(::perfetto::protos::Utsname)},
        { 16, 30, -1, sizeof(::perfetto::protos::SystemInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_Utsname_default_instance_._instance,
    &::perfetto::protos::_SystemInfo_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\'protos/perfetto/trace/system_info.prot"
    "o\022\017perfetto.protos\"M\n\007Utsname\022\017\n\007sysname"
    "\030\001 \001(\t\022\017\n\007version\030\002 \001(\t\022\017\n\007release\030\003 \001(\t"
    "\022\017\n\007machine\030\004 \001(\t\"\267\001\n\nSystemInfo\022)\n\007utsn"
    "ame\030\001 \001(\0132\030.perfetto.protos.Utsname\022!\n\031a"
    "ndroid_build_fingerprint\030\002 \001(\t\022\n\n\002hz\030\003 \001"
    "(\003\022\037\n\027tracing_service_version\030\004 \001(\t\022\033\n\023a"
    "ndroid_sdk_version\030\005 \001(\004\022\021\n\tpage_size\030\006 "
    "\001(\r"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto = {
    false,
    false,
    323,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto,
    "protos/perfetto/trace/system_info.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class Utsname::_Internal {
 public:
  using HasBits = decltype(std::declval<Utsname>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Utsname, _impl_._has_bits_);
  static void set_has_sysname(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_version(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_release(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_machine(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

Utsname::Utsname(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.Utsname)
}
Utsname::Utsname(const Utsname& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Utsname* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.sysname_) {}

    , decltype(_impl_.version_) {}

    , decltype(_impl_.release_) {}

    , decltype(_impl_.machine_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.sysname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.sysname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.sysname_.Set(from._internal_sysname(), _this->GetArenaForAllocation());
  }
  _impl_.version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.version_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.version_.Set(from._internal_version(), _this->GetArenaForAllocation());
  }
  _impl_.release_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.release_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.release_.Set(from._internal_release(), _this->GetArenaForAllocation());
  }
  _impl_.machine_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.machine_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000008u) != 0) {
    _this->_impl_.machine_.Set(from._internal_machine(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.Utsname)
}

inline void Utsname::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.sysname_) {}

    , decltype(_impl_.version_) {}

    , decltype(_impl_.release_) {}

    , decltype(_impl_.machine_) {}

  };
  _impl_.sysname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.sysname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.version_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.release_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.release_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.machine_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.machine_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Utsname::~Utsname() {
  // @@protoc_insertion_point(destructor:perfetto.protos.Utsname)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Utsname::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sysname_.Destroy();
  _impl_.version_.Destroy();
  _impl_.release_.Destroy();
  _impl_.machine_.Destroy();
}

void Utsname::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Utsname::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.Utsname)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.sysname_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.version_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.release_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.machine_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Utsname::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string sysname = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_sysname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.Utsname.sysname");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_version();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.Utsname.version");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string release = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_release();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.Utsname.release");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string machine = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_machine();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.Utsname.machine");
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

::uint8_t* Utsname::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.Utsname)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string sysname = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_sysname();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.Utsname.sysname");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // optional string version = 2;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_version();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.Utsname.version");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // optional string release = 3;
  if (cached_has_bits & 0x00000004u) {
    const std::string& _s = this->_internal_release();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.Utsname.release");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional string machine = 4;
  if (cached_has_bits & 0x00000008u) {
    const std::string& _s = this->_internal_machine();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.Utsname.machine");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.Utsname)
  return target;
}

::size_t Utsname::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.Utsname)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string sysname = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_sysname());
    }

    // optional string version = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_version());
    }

    // optional string release = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_release());
    }

    // optional string machine = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_machine());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Utsname::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Utsname::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Utsname::GetClassData() const { return &_class_data_; }


void Utsname::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Utsname*>(&to_msg);
  auto& from = static_cast<const Utsname&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.Utsname)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_sysname(from._internal_sysname());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_version(from._internal_version());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_release(from._internal_release());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_set_machine(from._internal_machine());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Utsname::CopyFrom(const Utsname& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.Utsname)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Utsname::IsInitialized() const {
  return true;
}

void Utsname::InternalSwap(Utsname* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.sysname_, lhs_arena,
                                       &other->_impl_.sysname_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.version_, lhs_arena,
                                       &other->_impl_.version_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.release_, lhs_arena,
                                       &other->_impl_.release_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.machine_, lhs_arena,
                                       &other->_impl_.machine_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata Utsname::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto[0]);
}
// ===================================================================

class SystemInfo::_Internal {
 public:
  using HasBits = decltype(std::declval<SystemInfo>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(SystemInfo, _impl_._has_bits_);
  static const ::perfetto::protos::Utsname& utsname(const SystemInfo* msg);
  static void set_has_utsname(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_android_build_fingerprint(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_hz(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_tracing_service_version(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_android_sdk_version(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_page_size(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

const ::perfetto::protos::Utsname&
SystemInfo::_Internal::utsname(const SystemInfo* msg) {
  return *msg->_impl_.utsname_;
}
SystemInfo::SystemInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SystemInfo)
}
SystemInfo::SystemInfo(const SystemInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SystemInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.android_build_fingerprint_) {}

    , decltype(_impl_.tracing_service_version_) {}

    , decltype(_impl_.utsname_){nullptr}
    , decltype(_impl_.hz_) {}

    , decltype(_impl_.android_sdk_version_) {}

    , decltype(_impl_.page_size_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.android_build_fingerprint_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.android_build_fingerprint_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.android_build_fingerprint_.Set(from._internal_android_build_fingerprint(), _this->GetArenaForAllocation());
  }
  _impl_.tracing_service_version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.tracing_service_version_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.tracing_service_version_.Set(from._internal_tracing_service_version(), _this->GetArenaForAllocation());
  }
  if ((from._impl_._has_bits_[0] & 0x00000004u) != 0) {
    _this->_impl_.utsname_ = new ::perfetto::protos::Utsname(*from._impl_.utsname_);
  }
  ::memcpy(&_impl_.hz_, &from._impl_.hz_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.page_size_) -
    reinterpret_cast<char*>(&_impl_.hz_)) + sizeof(_impl_.page_size_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SystemInfo)
}

inline void SystemInfo::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.android_build_fingerprint_) {}

    , decltype(_impl_.tracing_service_version_) {}

    , decltype(_impl_.utsname_){nullptr}
    , decltype(_impl_.hz_) { ::int64_t{0} }

    , decltype(_impl_.android_sdk_version_) { ::uint64_t{0u} }

    , decltype(_impl_.page_size_) { 0u }

  };
  _impl_.android_build_fingerprint_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.android_build_fingerprint_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.tracing_service_version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.tracing_service_version_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SystemInfo::~SystemInfo() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SystemInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SystemInfo::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.android_build_fingerprint_.Destroy();
  _impl_.tracing_service_version_.Destroy();
  if (this != internal_default_instance()) delete _impl_.utsname_;
}

void SystemInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SystemInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SystemInfo)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.android_build_fingerprint_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.tracing_service_version_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      ABSL_DCHECK(_impl_.utsname_ != nullptr);
      _impl_.utsname_->Clear();
    }
  }
  if (cached_has_bits & 0x00000038u) {
    ::memset(&_impl_.hz_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.page_size_) -
        reinterpret_cast<char*>(&_impl_.hz_)) + sizeof(_impl_.page_size_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SystemInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.Utsname utsname = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_utsname(), ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string android_build_fingerprint = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_android_build_fingerprint();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.SystemInfo.android_build_fingerprint");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional int64 hz = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 24)) {
          _Internal::set_has_hz(&has_bits);
          _impl_.hz_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string tracing_service_version = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_tracing_service_version();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.SystemInfo.tracing_service_version");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 android_sdk_version = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_android_sdk_version(&has_bits);
          _impl_.android_sdk_version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint32 page_size = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 48)) {
          _Internal::set_has_page_size(&has_bits);
          _impl_.page_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

::uint8_t* SystemInfo::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SystemInfo)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .perfetto.protos.Utsname utsname = 1;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::utsname(this),
        _Internal::utsname(this).GetCachedSize(), target, stream);
  }

  // optional string android_build_fingerprint = 2;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_android_build_fingerprint();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.SystemInfo.android_build_fingerprint");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // optional int64 hz = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        3, this->_internal_hz(), target);
  }

  // optional string tracing_service_version = 4;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_tracing_service_version();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.SystemInfo.tracing_service_version");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  // optional uint64 android_sdk_version = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        5, this->_internal_android_sdk_version(), target);
  }

  // optional uint32 page_size = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        6, this->_internal_page_size(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SystemInfo)
  return target;
}

::size_t SystemInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SystemInfo)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional string android_build_fingerprint = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_android_build_fingerprint());
    }

    // optional string tracing_service_version = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_tracing_service_version());
    }

    // optional .perfetto.protos.Utsname utsname = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.utsname_);
    }

    // optional int64 hz = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
          this->_internal_hz());
    }

    // optional uint64 android_sdk_version = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_android_sdk_version());
    }

    // optional uint32 page_size = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_page_size());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SystemInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SystemInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SystemInfo::GetClassData() const { return &_class_data_; }


void SystemInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SystemInfo*>(&to_msg);
  auto& from = static_cast<const SystemInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SystemInfo)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_android_build_fingerprint(from._internal_android_build_fingerprint());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_tracing_service_version(from._internal_tracing_service_version());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_mutable_utsname()->::perfetto::protos::Utsname::MergeFrom(
          from._internal_utsname());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.hz_ = from._impl_.hz_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.android_sdk_version_ = from._impl_.android_sdk_version_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.page_size_ = from._impl_.page_size_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SystemInfo::CopyFrom(const SystemInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SystemInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemInfo::IsInitialized() const {
  return true;
}

void SystemInfo::InternalSwap(SystemInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.android_build_fingerprint_, lhs_arena,
                                       &other->_impl_.android_build_fingerprint_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.tracing_service_version_, lhs_arena,
                                       &other->_impl_.tracing_service_version_, rhs_arena);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SystemInfo, _impl_.page_size_)
      + sizeof(SystemInfo::_impl_.page_size_)
      - PROTOBUF_FIELD_OFFSET(SystemInfo, _impl_.utsname_)>(
          reinterpret_cast<char*>(&_impl_.utsname_),
          reinterpret_cast<char*>(&other->_impl_.utsname_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SystemInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::Utsname*
Arena::CreateMaybeMessage< ::perfetto::protos::Utsname >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::Utsname >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::SystemInfo*
Arena::CreateMaybeMessage< ::perfetto::protos::SystemInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SystemInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
