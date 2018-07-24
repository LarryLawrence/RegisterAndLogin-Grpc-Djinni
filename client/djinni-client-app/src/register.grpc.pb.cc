// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: register.proto

#include "register.pb.h"
#include "register.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace RegisterAndLogin {

static const char* Register_method_names[] = {
  "/RegisterAndLogin.Register/Register",
};

std::unique_ptr< Register::Stub> Register::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Register::Stub> stub(new Register::Stub(channel));
  return stub;
}

Register::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Register_(Register_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Register::Stub::Register(::grpc::ClientContext* context, const ::RegisterAndLogin::RegisterRequest& request, ::RegisterAndLogin::RegisterReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Register_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::RegisterAndLogin::RegisterReply>* Register::Stub::AsyncRegisterRaw(::grpc::ClientContext* context, const ::RegisterAndLogin::RegisterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::RegisterAndLogin::RegisterReply>::Create(channel_.get(), cq, rpcmethod_Register_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::RegisterAndLogin::RegisterReply>* Register::Stub::PrepareAsyncRegisterRaw(::grpc::ClientContext* context, const ::RegisterAndLogin::RegisterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::RegisterAndLogin::RegisterReply>::Create(channel_.get(), cq, rpcmethod_Register_, context, request, false);
}

Register::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Register_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Register::Service, ::RegisterAndLogin::RegisterRequest, ::RegisterAndLogin::RegisterReply>(
          std::mem_fn(&Register::Service::Register), this)));
}

Register::Service::~Service() {
}

::grpc::Status Register::Service::Register(::grpc::ServerContext* context, const ::RegisterAndLogin::RegisterRequest* request, ::RegisterAndLogin::RegisterReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace RegisterAndLogin
