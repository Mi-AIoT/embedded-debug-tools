// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/track_event/track_event_config.proto

#include "protos/perfetto/config/track_event/track_event_config.pb.h"

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
PROTOBUF_CONSTEXPR TrackEventConfig::TrackEventConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.disabled_categories_)*/{}
  , /*decltype(_impl_.enabled_categories_)*/{}
  , /*decltype(_impl_.disabled_tags_)*/{}
  , /*decltype(_impl_.enabled_tags_)*/{}
  , /*decltype(_impl_.timestamp_unit_multiplier_)*/ ::uint64_t{0u}

  , /*decltype(_impl_.disable_incremental_timestamps_)*/ false

  , /*decltype(_impl_.filter_debug_annotations_)*/ false

  , /*decltype(_impl_.enable_thread_time_sampling_)*/ false

  , /*decltype(_impl_.filter_dynamic_event_names_)*/ false
} {}
struct TrackEventConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrackEventConfigDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrackEventConfigDefaultTypeInternal() {}
  union {
    TrackEventConfig _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrackEventConfigDefaultTypeInternal _TrackEventConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.disabled_categories_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.enabled_categories_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.disabled_tags_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.enabled_tags_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.disable_incremental_timestamps_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.timestamp_unit_multiplier_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.filter_debug_annotations_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.enable_thread_time_sampling_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::TrackEventConfig, _impl_.filter_dynamic_event_names_),
    ~0u,
    ~0u,
    ~0u,
    ~0u,
    1,
    0,
    2,
    3,
    4,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 17, -1, sizeof(::perfetto::protos::TrackEventConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_TrackEventConfig_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n;protos/perfetto/config/track_event/tra"
    "ck_event_config.proto\022\017perfetto.protos\"\256"
    "\002\n\020TrackEventConfig\022\033\n\023disabled_categori"
    "es\030\001 \003(\t\022\032\n\022enabled_categories\030\002 \003(\t\022\025\n\r"
    "disabled_tags\030\003 \003(\t\022\024\n\014enabled_tags\030\004 \003("
    "\t\022&\n\036disable_incremental_timestamps\030\005 \001("
    "\010\022!\n\031timestamp_unit_multiplier\030\006 \001(\004\022 \n\030"
    "filter_debug_annotations\030\007 \001(\010\022#\n\033enable"
    "_thread_time_sampling\030\010 \001(\010\022\"\n\032filter_dy"
    "namic_event_names\030\t \001(\010"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto = {
    false,
    false,
    383,
    descriptor_table_protodef_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto,
    "protos/perfetto/config/track_event/track_event_config.proto",
    &descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto(&descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class TrackEventConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<TrackEventConfig>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(TrackEventConfig, _impl_._has_bits_);
  static void set_has_disable_incremental_timestamps(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_timestamp_unit_multiplier(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_filter_debug_annotations(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_enable_thread_time_sampling(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_filter_dynamic_event_names(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

TrackEventConfig::TrackEventConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TrackEventConfig)
}
TrackEventConfig::TrackEventConfig(const TrackEventConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TrackEventConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.disabled_categories_){from._impl_.disabled_categories_}
    , decltype(_impl_.enabled_categories_){from._impl_.enabled_categories_}
    , decltype(_impl_.disabled_tags_){from._impl_.disabled_tags_}
    , decltype(_impl_.enabled_tags_){from._impl_.enabled_tags_}
    , decltype(_impl_.timestamp_unit_multiplier_) {}

    , decltype(_impl_.disable_incremental_timestamps_) {}

    , decltype(_impl_.filter_debug_annotations_) {}

    , decltype(_impl_.enable_thread_time_sampling_) {}

    , decltype(_impl_.filter_dynamic_event_names_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.timestamp_unit_multiplier_, &from._impl_.timestamp_unit_multiplier_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.filter_dynamic_event_names_) -
    reinterpret_cast<char*>(&_impl_.timestamp_unit_multiplier_)) + sizeof(_impl_.filter_dynamic_event_names_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TrackEventConfig)
}

inline void TrackEventConfig::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.disabled_categories_){arena}
    , decltype(_impl_.enabled_categories_){arena}
    , decltype(_impl_.disabled_tags_){arena}
    , decltype(_impl_.enabled_tags_){arena}
    , decltype(_impl_.timestamp_unit_multiplier_) { ::uint64_t{0u} }

    , decltype(_impl_.disable_incremental_timestamps_) { false }

    , decltype(_impl_.filter_debug_annotations_) { false }

    , decltype(_impl_.enable_thread_time_sampling_) { false }

    , decltype(_impl_.filter_dynamic_event_names_) { false }

  };
}

TrackEventConfig::~TrackEventConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TrackEventConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrackEventConfig::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_disabled_categories()->~RepeatedPtrField();
  _internal_mutable_enabled_categories()->~RepeatedPtrField();
  _internal_mutable_disabled_tags()->~RepeatedPtrField();
  _internal_mutable_enabled_tags()->~RepeatedPtrField();
}

void TrackEventConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TrackEventConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TrackEventConfig)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_disabled_categories()->Clear();
  _internal_mutable_enabled_categories()->Clear();
  _internal_mutable_disabled_tags()->Clear();
  _internal_mutable_enabled_tags()->Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&_impl_.timestamp_unit_multiplier_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.filter_dynamic_event_names_) -
        reinterpret_cast<char*>(&_impl_.timestamp_unit_multiplier_)) + sizeof(_impl_.filter_dynamic_event_names_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TrackEventConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated string disabled_categories = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_disabled_categories();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.TrackEventConfig.disabled_categories");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string enabled_categories = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_enabled_categories();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.TrackEventConfig.enabled_categories");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string disabled_tags = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_disabled_tags();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.TrackEventConfig.disabled_tags");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string enabled_tags = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_enabled_tags();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            #ifndef NDEBUG
            ::_pbi::VerifyUTF8(str, "perfetto.protos.TrackEventConfig.enabled_tags");
            #endif  // !NDEBUG
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool disable_incremental_timestamps = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 40)) {
          _Internal::set_has_disable_incremental_timestamps(&has_bits);
          _impl_.disable_incremental_timestamps_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional uint64 timestamp_unit_multiplier = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 48)) {
          _Internal::set_has_timestamp_unit_multiplier(&has_bits);
          _impl_.timestamp_unit_multiplier_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool filter_debug_annotations = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 56)) {
          _Internal::set_has_filter_debug_annotations(&has_bits);
          _impl_.filter_debug_annotations_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool enable_thread_time_sampling = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 64)) {
          _Internal::set_has_enable_thread_time_sampling(&has_bits);
          _impl_.enable_thread_time_sampling_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional bool filter_dynamic_event_names = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 72)) {
          _Internal::set_has_filter_dynamic_event_names(&has_bits);
          _impl_.filter_dynamic_event_names_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::uint8_t* TrackEventConfig::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TrackEventConfig)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated string disabled_categories = 1;
  for (int i = 0, n = this->_internal_disabled_categories_size(); i < n; ++i) {
    const auto& s = this->_internal_disabled_categories(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.TrackEventConfig.disabled_categories");
    target = stream->WriteString(1, s, target);
  }

  // repeated string enabled_categories = 2;
  for (int i = 0, n = this->_internal_enabled_categories_size(); i < n; ++i) {
    const auto& s = this->_internal_enabled_categories(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.TrackEventConfig.enabled_categories");
    target = stream->WriteString(2, s, target);
  }

  // repeated string disabled_tags = 3;
  for (int i = 0, n = this->_internal_disabled_tags_size(); i < n; ++i) {
    const auto& s = this->_internal_disabled_tags(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.TrackEventConfig.disabled_tags");
    target = stream->WriteString(3, s, target);
  }

  // repeated string enabled_tags = 4;
  for (int i = 0, n = this->_internal_enabled_tags_size(); i < n; ++i) {
    const auto& s = this->_internal_enabled_tags(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.TrackEventConfig.enabled_tags");
    target = stream->WriteString(4, s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional bool disable_incremental_timestamps = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        5, this->_internal_disable_incremental_timestamps(), target);
  }

  // optional uint64 timestamp_unit_multiplier = 6;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        6, this->_internal_timestamp_unit_multiplier(), target);
  }

  // optional bool filter_debug_annotations = 7;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        7, this->_internal_filter_debug_annotations(), target);
  }

  // optional bool enable_thread_time_sampling = 8;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        8, this->_internal_enable_thread_time_sampling(), target);
  }

  // optional bool filter_dynamic_event_names = 9;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        9, this->_internal_filter_dynamic_event_names(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TrackEventConfig)
  return target;
}

::size_t TrackEventConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TrackEventConfig)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string disabled_categories = 1;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_disabled_categories().size());
  for (int i = 0, n = _internal_disabled_categories().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_disabled_categories().Get(i));
  }

  // repeated string enabled_categories = 2;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_enabled_categories().size());
  for (int i = 0, n = _internal_enabled_categories().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_enabled_categories().Get(i));
  }

  // repeated string disabled_tags = 3;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_disabled_tags().size());
  for (int i = 0, n = _internal_disabled_tags().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_disabled_tags().Get(i));
  }

  // repeated string enabled_tags = 4;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_enabled_tags().size());
  for (int i = 0, n = _internal_enabled_tags().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_enabled_tags().Get(i));
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint64 timestamp_unit_multiplier = 6;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
          this->_internal_timestamp_unit_multiplier());
    }

    // optional bool disable_incremental_timestamps = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2;
    }

    // optional bool filter_debug_annotations = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += 2;
    }

    // optional bool enable_thread_time_sampling = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 2;
    }

    // optional bool filter_dynamic_event_names = 9;
    if (cached_has_bits & 0x00000010u) {
      total_size += 2;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TrackEventConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TrackEventConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TrackEventConfig::GetClassData() const { return &_class_data_; }


void TrackEventConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TrackEventConfig*>(&to_msg);
  auto& from = static_cast<const TrackEventConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TrackEventConfig)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_disabled_categories()->MergeFrom(from._internal_disabled_categories());
  _this->_internal_mutable_enabled_categories()->MergeFrom(from._internal_enabled_categories());
  _this->_internal_mutable_disabled_tags()->MergeFrom(from._internal_disabled_tags());
  _this->_internal_mutable_enabled_tags()->MergeFrom(from._internal_enabled_tags());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.timestamp_unit_multiplier_ = from._impl_.timestamp_unit_multiplier_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.disable_incremental_timestamps_ = from._impl_.disable_incremental_timestamps_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.filter_debug_annotations_ = from._impl_.filter_debug_annotations_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.enable_thread_time_sampling_ = from._impl_.enable_thread_time_sampling_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.filter_dynamic_event_names_ = from._impl_.filter_dynamic_event_names_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TrackEventConfig::CopyFrom(const TrackEventConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TrackEventConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrackEventConfig::IsInitialized() const {
  return true;
}

void TrackEventConfig::InternalSwap(TrackEventConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _internal_mutable_disabled_categories()->InternalSwap(
      other->_internal_mutable_disabled_categories());
  _internal_mutable_enabled_categories()->InternalSwap(
      other->_internal_mutable_enabled_categories());
  _internal_mutable_disabled_tags()->InternalSwap(
      other->_internal_mutable_disabled_tags());
  _internal_mutable_enabled_tags()->InternalSwap(
      other->_internal_mutable_enabled_tags());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TrackEventConfig, _impl_.filter_dynamic_event_names_)
      + sizeof(TrackEventConfig::_impl_.filter_dynamic_event_names_)
      - PROTOBUF_FIELD_OFFSET(TrackEventConfig, _impl_.timestamp_unit_multiplier_)>(
          reinterpret_cast<char*>(&_impl_.timestamp_unit_multiplier_),
          reinterpret_cast<char*>(&other->_impl_.timestamp_unit_multiplier_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TrackEventConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto_getter, &descriptor_table_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto_once,
      file_level_metadata_protos_2fperfetto_2fconfig_2ftrack_5fevent_2ftrack_5fevent_5fconfig_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TrackEventConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::TrackEventConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TrackEventConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
