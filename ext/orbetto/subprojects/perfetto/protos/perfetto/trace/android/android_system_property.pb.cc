// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/android/android_system_property.proto

#include "protos/perfetto/trace/android/android_system_property.pb.h"

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
PROTOBUF_CONSTEXPR AndroidSystemProperty_PropertyValue::AndroidSystemProperty_PropertyValue(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.value_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }
} {}
struct AndroidSystemProperty_PropertyValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AndroidSystemProperty_PropertyValueDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AndroidSystemProperty_PropertyValueDefaultTypeInternal() {}
  union {
    AndroidSystemProperty_PropertyValue _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AndroidSystemProperty_PropertyValueDefaultTypeInternal _AndroidSystemProperty_PropertyValue_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR AndroidSystemProperty::AndroidSystemProperty(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.values_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AndroidSystemPropertyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AndroidSystemPropertyDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AndroidSystemPropertyDefaultTypeInternal() {}
  union {
    AndroidSystemProperty _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AndroidSystemPropertyDefaultTypeInternal _AndroidSystemProperty_default_instance_;
}  // namespace protos
}  // namespace perfetto
static ::_pb::Metadata file_level_metadata_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto = nullptr;
const ::uint32_t TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidSystemProperty_PropertyValue, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidSystemProperty_PropertyValue, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidSystemProperty_PropertyValue, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidSystemProperty_PropertyValue, _impl_.value_),
    0,
    1,
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidSystemProperty, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::perfetto::protos::AndroidSystemProperty, _impl_.values_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 10, -1, sizeof(::perfetto::protos::AndroidSystemProperty_PropertyValue)},
        { 12, -1, -1, sizeof(::perfetto::protos::AndroidSystemProperty)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::perfetto::protos::_AndroidSystemProperty_PropertyValue_default_instance_._instance,
    &::perfetto::protos::_AndroidSystemProperty_default_instance_._instance,
};
const char descriptor_table_protodef_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n;protos/perfetto/trace/android/android_"
    "system_property.proto\022\017perfetto.protos\"\213"
    "\001\n\025AndroidSystemProperty\022D\n\006values\030\001 \003(\013"
    "24.perfetto.protos.AndroidSystemProperty"
    ".PropertyValue\032,\n\rPropertyValue\022\014\n\004name\030"
    "\001 \001(\t\022\r\n\005value\030\002 \001(\t"
};
static ::absl::once_flag descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto = {
    false,
    false,
    220,
    descriptor_table_protodef_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto,
    "protos/perfetto/trace/android/android_system_property.proto",
    &descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto::offsets,
    file_level_metadata_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto,
    file_level_enum_descriptors_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto,
    file_level_service_descriptors_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_getter() {
  return &descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto(&descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto);
namespace perfetto {
namespace protos {
// ===================================================================

class AndroidSystemProperty_PropertyValue::_Internal {
 public:
  using HasBits = decltype(std::declval<AndroidSystemProperty_PropertyValue>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(AndroidSystemProperty_PropertyValue, _impl_._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

AndroidSystemProperty_PropertyValue::AndroidSystemProperty_PropertyValue(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.AndroidSystemProperty.PropertyValue)
}
AndroidSystemProperty_PropertyValue::AndroidSystemProperty_PropertyValue(const AndroidSystemProperty_PropertyValue& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AndroidSystemProperty_PropertyValue* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_) {}

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
  _impl_.value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.value_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.value_.Set(from._internal_value(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.AndroidSystemProperty.PropertyValue)
}

inline void AndroidSystemProperty_PropertyValue::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_) {}

    , decltype(_impl_.value_) {}

  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.value_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AndroidSystemProperty_PropertyValue::~AndroidSystemProperty_PropertyValue() {
  // @@protoc_insertion_point(destructor:perfetto.protos.AndroidSystemProperty.PropertyValue)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AndroidSystemProperty_PropertyValue::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.value_.Destroy();
}

void AndroidSystemProperty_PropertyValue::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AndroidSystemProperty_PropertyValue::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.AndroidSystemProperty.PropertyValue)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.value_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AndroidSystemProperty_PropertyValue::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.AndroidSystemProperty.PropertyValue.name");
          #endif  // !NDEBUG
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_value();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "perfetto.protos.AndroidSystemProperty.PropertyValue.value");
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

::uint8_t* AndroidSystemProperty_PropertyValue::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.AndroidSystemProperty.PropertyValue)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.AndroidSystemProperty.PropertyValue.name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // optional string value = 2;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_value();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
                                "perfetto.protos.AndroidSystemProperty.PropertyValue.value");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.AndroidSystemProperty.PropertyValue)
  return target;
}

::size_t AndroidSystemProperty_PropertyValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.AndroidSystemProperty.PropertyValue)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_name());
    }

    // optional string value = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_value());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AndroidSystemProperty_PropertyValue::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AndroidSystemProperty_PropertyValue::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AndroidSystemProperty_PropertyValue::GetClassData() const { return &_class_data_; }


void AndroidSystemProperty_PropertyValue::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AndroidSystemProperty_PropertyValue*>(&to_msg);
  auto& from = static_cast<const AndroidSystemProperty_PropertyValue&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.AndroidSystemProperty.PropertyValue)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_value(from._internal_value());
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AndroidSystemProperty_PropertyValue::CopyFrom(const AndroidSystemProperty_PropertyValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.AndroidSystemProperty.PropertyValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AndroidSystemProperty_PropertyValue::IsInitialized() const {
  return true;
}

void AndroidSystemProperty_PropertyValue::InternalSwap(AndroidSystemProperty_PropertyValue* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, lhs_arena,
                                       &other->_impl_.name_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.value_, lhs_arena,
                                       &other->_impl_.value_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata AndroidSystemProperty_PropertyValue::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto[0]);
}
// ===================================================================

class AndroidSystemProperty::_Internal {
 public:
};

AndroidSystemProperty::AndroidSystemProperty(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.AndroidSystemProperty)
}
AndroidSystemProperty::AndroidSystemProperty(const AndroidSystemProperty& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AndroidSystemProperty* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.values_){from._impl_.values_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.AndroidSystemProperty)
}

inline void AndroidSystemProperty::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.values_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

AndroidSystemProperty::~AndroidSystemProperty() {
  // @@protoc_insertion_point(destructor:perfetto.protos.AndroidSystemProperty)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AndroidSystemProperty::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_values()->~RepeatedPtrField();
}

void AndroidSystemProperty::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AndroidSystemProperty::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.AndroidSystemProperty)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_values()->Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AndroidSystemProperty::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.AndroidSystemProperty.PropertyValue values = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_values(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::uint8_t* AndroidSystemProperty::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.AndroidSystemProperty)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.AndroidSystemProperty.PropertyValue values = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_values_size()); i < n; i++) {
    const auto& repfield = this->_internal_values(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.AndroidSystemProperty)
  return target;
}

::size_t AndroidSystemProperty::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.AndroidSystemProperty)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.AndroidSystemProperty.PropertyValue values = 1;
  total_size += 1UL * this->_internal_values_size();
  for (const auto& msg : this->_internal_values()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AndroidSystemProperty::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AndroidSystemProperty::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AndroidSystemProperty::GetClassData() const { return &_class_data_; }


void AndroidSystemProperty::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AndroidSystemProperty*>(&to_msg);
  auto& from = static_cast<const AndroidSystemProperty&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.AndroidSystemProperty)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_values()->MergeFrom(from._internal_values());
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AndroidSystemProperty::CopyFrom(const AndroidSystemProperty& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.AndroidSystemProperty)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AndroidSystemProperty::IsInitialized() const {
  return true;
}

void AndroidSystemProperty::InternalSwap(AndroidSystemProperty* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_values()->InternalSwap(other->_internal_mutable_values());
}

::PROTOBUF_NAMESPACE_ID::Metadata AndroidSystemProperty::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_getter, &descriptor_table_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto_once,
      file_level_metadata_protos_2fperfetto_2ftrace_2fandroid_2fandroid_5fsystem_5fproperty_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::AndroidSystemProperty_PropertyValue*
Arena::CreateMaybeMessage< ::perfetto::protos::AndroidSystemProperty_PropertyValue >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::AndroidSystemProperty_PropertyValue >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::AndroidSystemProperty*
Arena::CreateMaybeMessage< ::perfetto::protos::AndroidSystemProperty >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::AndroidSystemProperty >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
