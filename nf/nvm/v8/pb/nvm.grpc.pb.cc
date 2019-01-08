// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: nvm.proto

#include "nvm.pb.h"
#include "nvm.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* NVMService_method_names[] = {
  "/NVMService/SmartContractCall",
};

std::unique_ptr< NVMService::Stub> NVMService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NVMService::Stub> stub(new NVMService::Stub(channel));
  return stub;
}

NVMService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SmartContractCall_(NVMService_method_names[0], ::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::NVMDataRequest, ::NVMDataResponse>* NVMService::Stub::SmartContractCallRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::NVMDataRequest, ::NVMDataResponse>::Create(channel_.get(), rpcmethod_SmartContractCall_, context);
}

::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>* NVMService::Stub::AsyncSmartContractCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::NVMDataRequest, ::NVMDataResponse>::Create(channel_.get(), cq, rpcmethod_SmartContractCall_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>* NVMService::Stub::PrepareAsyncSmartContractCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::NVMDataRequest, ::NVMDataResponse>::Create(channel_.get(), cq, rpcmethod_SmartContractCall_, context, false, nullptr);
}

NVMService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NVMService_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< NVMService::Service, ::NVMDataRequest, ::NVMDataResponse>(
          std::mem_fn(&NVMService::Service::SmartContractCall), this)));
}

NVMService::Service::~Service() {
}

::grpc::Status NVMService::Service::SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


