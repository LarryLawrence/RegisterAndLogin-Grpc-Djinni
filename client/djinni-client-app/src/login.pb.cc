// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: login.proto

#include "login.pb.h"

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
class LoginRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LoginRequest>
      _instance;
} _LoginRequest_default_instance_;
class LoginReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LoginReply>
      _instance;
} _LoginReply_default_instance_;
}  // namespace RegisterAndLogin
namespace protobuf_login_2eproto {
static void InitDefaultsLoginRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RegisterAndLogin::_LoginRequest_default_instance_;
    new (ptr) ::RegisterAndLogin::LoginRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RegisterAndLogin::LoginRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LoginRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLoginRequest}, {}};

static void InitDefaultsLoginReply() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::RegisterAndLogin::_LoginReply_default_instance_;
    new (ptr) ::RegisterAndLogin::LoginReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::RegisterAndLogin::LoginReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_LoginReply =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsLoginReply}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LoginRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_LoginReply.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginRequest, username_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginRequest, userpwd_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginRequest, deviceid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginReply, resultcode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginReply, resultmsg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::RegisterAndLogin::LoginReply, auth_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::RegisterAndLogin::LoginRequest)},
  { 8, -1, sizeof(::RegisterAndLogin::LoginReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::RegisterAndLogin::_LoginRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::RegisterAndLogin::_LoginReply_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "login.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\013login.proto\022\020RegisterAndLogin\"C\n\014Login"
      "Request\022\020\n\010userName\030\001 \001(\t\022\017\n\007userPwd\030\002 \001"
      "(\t\022\020\n\010deviceId\030\003 \001(\t\"A\n\nLoginReply\022\022\n\nre"
      "sultCode\030\004 \001(\005\022\021\n\tresultMsg\030\005 \001(\t\022\014\n\004aut"
      "h\030\006 \001(\t2P\n\005Login\022G\n\005Login\022\036.RegisterAndL"
      "ogin.LoginRequest\032\034.RegisterAndLogin.Log"
      "inReply\"\000B.\n\030io.grpc.registerandloginB\nL"
      "oginProtoP\001\242\002\003RALb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 305);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "login.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_login_2eproto
namespace RegisterAndLogin {

// ===================================================================

void LoginRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginRequest::kUserNameFieldNumber;
const int LoginRequest::kUserPwdFieldNumber;
const int LoginRequest::kDeviceIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginRequest::LoginRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_login_2eproto::scc_info_LoginRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:RegisterAndLogin.LoginRequest)
}
LoginRequest::LoginRequest(const LoginRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  userpwd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.userpwd().size() > 0) {
    userpwd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.userpwd_);
  }
  deviceid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.deviceid().size() > 0) {
    deviceid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deviceid_);
  }
  // @@protoc_insertion_point(copy_constructor:RegisterAndLogin.LoginRequest)
}

void LoginRequest::SharedCtor() {
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  userpwd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  deviceid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

LoginRequest::~LoginRequest() {
  // @@protoc_insertion_point(destructor:RegisterAndLogin.LoginRequest)
  SharedDtor();
}

void LoginRequest::SharedDtor() {
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  userpwd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  deviceid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LoginRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LoginRequest::descriptor() {
  ::protobuf_login_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_login_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LoginRequest& LoginRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_login_2eproto::scc_info_LoginRequest.base);
  return *internal_default_instance();
}


void LoginRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:RegisterAndLogin.LoginRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  userpwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  deviceid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool LoginRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RegisterAndLogin.LoginRequest)
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
            "RegisterAndLogin.LoginRequest.userName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string userPwd = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userpwd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->userpwd().data(), static_cast<int>(this->userpwd().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RegisterAndLogin.LoginRequest.userPwd"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string deviceId = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deviceid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->deviceid().data(), static_cast<int>(this->deviceid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RegisterAndLogin.LoginRequest.deviceId"));
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
  // @@protoc_insertion_point(parse_success:RegisterAndLogin.LoginRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RegisterAndLogin.LoginRequest)
  return false;
#undef DO_
}

void LoginRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RegisterAndLogin.LoginRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string userName = 1;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginRequest.userName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // string userPwd = 2;
  if (this->userpwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->userpwd().data(), static_cast<int>(this->userpwd().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginRequest.userPwd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->userpwd(), output);
  }

  // string deviceId = 3;
  if (this->deviceid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deviceid().data(), static_cast<int>(this->deviceid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginRequest.deviceId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->deviceid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:RegisterAndLogin.LoginRequest)
}

::google::protobuf::uint8* LoginRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RegisterAndLogin.LoginRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string userName = 1;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginRequest.userName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // string userPwd = 2;
  if (this->userpwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->userpwd().data(), static_cast<int>(this->userpwd().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginRequest.userPwd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->userpwd(), target);
  }

  // string deviceId = 3;
  if (this->deviceid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deviceid().data(), static_cast<int>(this->deviceid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginRequest.deviceId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->deviceid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RegisterAndLogin.LoginRequest)
  return target;
}

size_t LoginRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RegisterAndLogin.LoginRequest)
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

  // string userPwd = 2;
  if (this->userpwd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->userpwd());
  }

  // string deviceId = 3;
  if (this->deviceid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->deviceid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RegisterAndLogin.LoginRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LoginRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RegisterAndLogin.LoginRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RegisterAndLogin.LoginRequest)
    MergeFrom(*source);
  }
}

void LoginRequest::MergeFrom(const LoginRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RegisterAndLogin.LoginRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.userpwd().size() > 0) {

    userpwd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.userpwd_);
  }
  if (from.deviceid().size() > 0) {

    deviceid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deviceid_);
  }
}

void LoginRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RegisterAndLogin.LoginRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginRequest::CopyFrom(const LoginRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RegisterAndLogin.LoginRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRequest::IsInitialized() const {
  return true;
}

void LoginRequest::Swap(LoginRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginRequest::InternalSwap(LoginRequest* other) {
  using std::swap;
  username_.Swap(&other->username_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  userpwd_.Swap(&other->userpwd_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  deviceid_.Swap(&other->deviceid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LoginRequest::GetMetadata() const {
  protobuf_login_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_login_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void LoginReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LoginReply::kResultCodeFieldNumber;
const int LoginReply::kResultMsgFieldNumber;
const int LoginReply::kAuthFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LoginReply::LoginReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_login_2eproto::scc_info_LoginReply.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:RegisterAndLogin.LoginReply)
}
LoginReply::LoginReply(const LoginReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resultmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.resultmsg().size() > 0) {
    resultmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resultmsg_);
  }
  auth_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.auth().size() > 0) {
    auth_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.auth_);
  }
  resultcode_ = from.resultcode_;
  // @@protoc_insertion_point(copy_constructor:RegisterAndLogin.LoginReply)
}

void LoginReply::SharedCtor() {
  resultmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  auth_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  resultcode_ = 0;
}

LoginReply::~LoginReply() {
  // @@protoc_insertion_point(destructor:RegisterAndLogin.LoginReply)
  SharedDtor();
}

void LoginReply::SharedDtor() {
  resultmsg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  auth_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LoginReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LoginReply::descriptor() {
  ::protobuf_login_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_login_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LoginReply& LoginReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_login_2eproto::scc_info_LoginReply.base);
  return *internal_default_instance();
}


void LoginReply::Clear() {
// @@protoc_insertion_point(message_clear_start:RegisterAndLogin.LoginReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  resultmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  auth_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  resultcode_ = 0;
  _internal_metadata_.Clear();
}

bool LoginReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:RegisterAndLogin.LoginReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 resultCode = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &resultcode_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string resultMsg = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resultmsg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->resultmsg().data(), static_cast<int>(this->resultmsg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RegisterAndLogin.LoginReply.resultMsg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string auth = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_auth()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->auth().data(), static_cast<int>(this->auth().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "RegisterAndLogin.LoginReply.auth"));
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
  // @@protoc_insertion_point(parse_success:RegisterAndLogin.LoginReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:RegisterAndLogin.LoginReply)
  return false;
#undef DO_
}

void LoginReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:RegisterAndLogin.LoginReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 resultCode = 4;
  if (this->resultcode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->resultcode(), output);
  }

  // string resultMsg = 5;
  if (this->resultmsg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resultmsg().data(), static_cast<int>(this->resultmsg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginReply.resultMsg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->resultmsg(), output);
  }

  // string auth = 6;
  if (this->auth().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->auth().data(), static_cast<int>(this->auth().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginReply.auth");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->auth(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:RegisterAndLogin.LoginReply)
}

::google::protobuf::uint8* LoginReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:RegisterAndLogin.LoginReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 resultCode = 4;
  if (this->resultcode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->resultcode(), target);
  }

  // string resultMsg = 5;
  if (this->resultmsg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->resultmsg().data(), static_cast<int>(this->resultmsg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginReply.resultMsg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->resultmsg(), target);
  }

  // string auth = 6;
  if (this->auth().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->auth().data(), static_cast<int>(this->auth().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "RegisterAndLogin.LoginReply.auth");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->auth(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RegisterAndLogin.LoginReply)
  return target;
}

size_t LoginReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RegisterAndLogin.LoginReply)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string resultMsg = 5;
  if (this->resultmsg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->resultmsg());
  }

  // string auth = 6;
  if (this->auth().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->auth());
  }

  // int32 resultCode = 4;
  if (this->resultcode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->resultcode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:RegisterAndLogin.LoginReply)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LoginReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:RegisterAndLogin.LoginReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:RegisterAndLogin.LoginReply)
    MergeFrom(*source);
  }
}

void LoginReply::MergeFrom(const LoginReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RegisterAndLogin.LoginReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.resultmsg().size() > 0) {

    resultmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resultmsg_);
  }
  if (from.auth().size() > 0) {

    auth_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.auth_);
  }
  if (from.resultcode() != 0) {
    set_resultcode(from.resultcode());
  }
}

void LoginReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:RegisterAndLogin.LoginReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginReply::CopyFrom(const LoginReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RegisterAndLogin.LoginReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginReply::IsInitialized() const {
  return true;
}

void LoginReply::Swap(LoginReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LoginReply::InternalSwap(LoginReply* other) {
  using std::swap;
  resultmsg_.Swap(&other->resultmsg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  auth_.Swap(&other->auth_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(resultcode_, other->resultcode_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LoginReply::GetMetadata() const {
  protobuf_login_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_login_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace RegisterAndLogin
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::RegisterAndLogin::LoginRequest* Arena::CreateMaybeMessage< ::RegisterAndLogin::LoginRequest >(Arena* arena) {
  return Arena::CreateInternal< ::RegisterAndLogin::LoginRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::RegisterAndLogin::LoginReply* Arena::CreateMaybeMessage< ::RegisterAndLogin::LoginReply >(Arena* arena) {
  return Arena::CreateInternal< ::RegisterAndLogin::LoginReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
