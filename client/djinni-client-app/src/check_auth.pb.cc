// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: check_auth.proto

#include "check_auth.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace RegisterAndLogin {
class CheckAuthRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CheckAuthRequest>
      _instance;
} _CheckAuthRequest_default_instance_;
class CheckAuthReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CheckAuthReply>
      _instance;
} _CheckAuthReply_default_instance_;
}  // namespace RegisterAndLogin
namespace protobuf_check_5fauth_2eproto {
static void InitDefaultsCheckAuthRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RegisterAndLogin::_CheckAuthRequest_default_instance_;
    new (ptr) ::RegisterAndLogin::CheckAuthRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RegisterAndLogin::CheckAuthRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CheckAuthRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCheckAuthRequest}, {}};

static void InitDefaultsCheckAuthReply() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RegisterAndLogin::_CheckAuthReply_default_instance_;
    new (ptr) ::RegisterAndLogin::CheckAuthReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RegisterAndLogin::CheckAuthReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CheckAuthReply =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCheckAuthReply}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CheckAuthRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_CheckAuthReply.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::CheckAuthRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::CheckAuthRequest, username_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::CheckAuthRequest, auth_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::CheckAuthReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::CheckAuthReply, isvalid_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::RegisterAndLogin::CheckAuthRequest)},
  { 7, -1, sizeof(::RegisterAndLogin::CheckAuthReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::RegisterAndLogin::_CheckAuthRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::RegisterAndLogin::_CheckAuthReply_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "check_auth.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020check_auth.proto\022\020RegisterAndLogin\"2\n\020"
      "CheckAuthRequest\022\020\n\010userName\030\001 \001(\t\022\014\n\004au"
      "th\030\002 \001(\t\"!\n\016CheckAuthReply\022\017\n\007isValid\030\003 "
      "\001(\0102`\n\tCheckAuth\022S\n\tCheckAuth\022\".Register"
      "AndLogin.CheckAuthRequest\032 .RegisterAndL"
      "ogin.CheckAuthReply\"\000B2\n\030io.grpc.registe"
      "randloginB\016CheckAuthProtoP\001\242\002\003RALb\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 281);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "check_auth.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_check_5fauth_2eproto
namespace RegisterAndLogin {

// ===================================================================

void CheckAuthRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CheckAuthRequest::kUserNameFieldNumber;
const int CheckAuthRequest::kAuthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckAuthRequest::CheckAuthRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_check_5fauth_2eproto::scc_info_CheckAuthRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:RegisterAndLogin.CheckAuthRequest)
}
CheckAuthRequest::CheckAuthRequest(const CheckAuthRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  auth_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.auth().size() > 0) {
    auth_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.auth_);
  }
  // @@protoc_insertion_point(copy_constructor:RegisterAndLogin.CheckAuthRequest)
}

void CheckAuthRequest::SharedCtor() {
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  auth_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CheckAuthRequest::~CheckAuthRequest() {
  // @@protoc_insertion_point(destructor:RegisterAndLogin.CheckAuthRequest)
  SharedDtor();
}

void CheckAuthRequest::SharedDtor() {
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  auth_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CheckAuthRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CheckAuthRequest::descriptor() {
  ::protobuf_check_5fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_check_5fauth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CheckAuthRequest& CheckAuthRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_check_5fauth_2eproto::scc_info_CheckAuthRequest.base);
  return *internal_default_instance();
}


void CheckAuthRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:RegisterAndLogin.CheckAuthRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  auth_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool CheckAuthRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RegisterAndLogin.CheckAuthRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string userName = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), static_cast<int>(this->username().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RegisterAndLogin.CheckAuthRequest.userName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string auth = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_auth()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->auth().data(), static_cast<int>(this->auth().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RegisterAndLogin.CheckAuthRequest.auth"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:RegisterAndLogin.CheckAuthRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RegisterAndLogin.CheckAuthRequest)
  return false;
#undef DO_
}

void CheckAuthRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RegisterAndLogin.CheckAuthRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string userName = 1;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.CheckAuthRequest.userName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // string auth = 2;
  if (this->auth().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->auth().data(), static_cast<int>(this->auth().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.CheckAuthRequest.auth");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->auth(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:RegisterAndLogin.CheckAuthRequest)
}

::google::protobuf::uint8* CheckAuthRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RegisterAndLogin.CheckAuthRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string userName = 1;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.CheckAuthRequest.userName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // string auth = 2;
  if (this->auth().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->auth().data(), static_cast<int>(this->auth().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.CheckAuthRequest.auth");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->auth(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RegisterAndLogin.CheckAuthRequest)
  return target;
}

size_t CheckAuthRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RegisterAndLogin.CheckAuthRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string userName = 1;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->username());
  }

  // string auth = 2;
  if (this->auth().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->auth());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CheckAuthRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RegisterAndLogin.CheckAuthRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const CheckAuthRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckAuthRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RegisterAndLogin.CheckAuthRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RegisterAndLogin.CheckAuthRequest)
    MergeFrom(*source);
  }
}

void CheckAuthRequest::MergeFrom(const CheckAuthRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RegisterAndLogin.CheckAuthRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.auth().size() > 0) {

    auth_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.auth_);
  }
}

void CheckAuthRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RegisterAndLogin.CheckAuthRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckAuthRequest::CopyFrom(const CheckAuthRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RegisterAndLogin.CheckAuthRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckAuthRequest::IsInitialized() const {
  return true;
}

void CheckAuthRequest::Swap(CheckAuthRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CheckAuthRequest::InternalSwap(CheckAuthRequest* other) {
  using std::swap;
  username_.Swap(&other->username_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  auth_.Swap(&other->auth_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CheckAuthRequest::GetMetadata() const {
  protobuf_check_5fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_check_5fauth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void CheckAuthReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CheckAuthReply::kIsValidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckAuthReply::CheckAuthReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_check_5fauth_2eproto::scc_info_CheckAuthReply.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:RegisterAndLogin.CheckAuthReply)
}
CheckAuthReply::CheckAuthReply(const CheckAuthReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  isvalid_ = from.isvalid_;
  // @@protoc_insertion_point(copy_constructor:RegisterAndLogin.CheckAuthReply)
}

void CheckAuthReply::SharedCtor() {
  isvalid_ = false;
}

CheckAuthReply::~CheckAuthReply() {
  // @@protoc_insertion_point(destructor:RegisterAndLogin.CheckAuthReply)
  SharedDtor();
}

void CheckAuthReply::SharedDtor() {
}

void CheckAuthReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* CheckAuthReply::descriptor() {
  ::protobuf_check_5fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_check_5fauth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CheckAuthReply& CheckAuthReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_check_5fauth_2eproto::scc_info_CheckAuthReply.base);
  return *internal_default_instance();
}


void CheckAuthReply::Clear() {
// @@protoc_insertion_point(message_clear_start:RegisterAndLogin.CheckAuthReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  isvalid_ = false;
  _internal_metadata_.Clear();
}

bool CheckAuthReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RegisterAndLogin.CheckAuthReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool isValid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isvalid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:RegisterAndLogin.CheckAuthReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RegisterAndLogin.CheckAuthReply)
  return false;
#undef DO_
}

void CheckAuthReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RegisterAndLogin.CheckAuthReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool isValid = 3;
  if (this->isvalid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->isvalid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:RegisterAndLogin.CheckAuthReply)
}

::google::protobuf::uint8* CheckAuthReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RegisterAndLogin.CheckAuthReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool isValid = 3;
  if (this->isvalid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->isvalid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RegisterAndLogin.CheckAuthReply)
  return target;
}

size_t CheckAuthReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RegisterAndLogin.CheckAuthReply)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool isValid = 3;
  if (this->isvalid() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CheckAuthReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RegisterAndLogin.CheckAuthReply)
  GOOGLE_DCHECK_NE(&from, this);
  const CheckAuthReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckAuthReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RegisterAndLogin.CheckAuthReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RegisterAndLogin.CheckAuthReply)
    MergeFrom(*source);
  }
}

void CheckAuthReply::MergeFrom(const CheckAuthReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RegisterAndLogin.CheckAuthReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.isvalid() != 0) {
    set_isvalid(from.isvalid());
  }
}

void CheckAuthReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RegisterAndLogin.CheckAuthReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckAuthReply::CopyFrom(const CheckAuthReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RegisterAndLogin.CheckAuthReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckAuthReply::IsInitialized() const {
  return true;
}

void CheckAuthReply::Swap(CheckAuthReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CheckAuthReply::InternalSwap(CheckAuthReply* other) {
  using std::swap;
  swap(isvalid_, other->isvalid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata CheckAuthReply::GetMetadata() const {
  protobuf_check_5fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_check_5fauth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace RegisterAndLogin
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::RegisterAndLogin::CheckAuthRequest* Arena::CreateMaybeMessage< ::RegisterAndLogin::CheckAuthRequest >(Arena* arena) {
  return Arena::CreateInternal< ::RegisterAndLogin::CheckAuthRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::RegisterAndLogin::CheckAuthReply* Arena::CreateMaybeMessage< ::RegisterAndLogin::CheckAuthReply >(Arena* arena) {
  return Arena::CreateInternal< ::RegisterAndLogin::CheckAuthReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)