// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: messages.proto
#ifndef GRPC_messages_2eproto__INCLUDED
#define GRPC_messages_2eproto__INCLUDED

#include "messages.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace GRPCRailway {

class Railway final {
 public:
  static constexpr char const* service_full_name() {
    return "GRPCRailway.Railway";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::GRPCRailway::RailwayState* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::RailwayState>> AsyncGetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::RailwayState>>(AsyncGetRailwayStateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::RailwayState>> PrepareAsyncGetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::RailwayState>>(PrepareAsyncGetRailwayStateRaw(context, request, cq));
    }
    virtual ::grpc::Status GetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::GRPCRailway::Train* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::Train>> AsyncGetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::Train>>(AsyncGetTrainRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::Train>> PrepareAsyncGetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::Train>>(PrepareAsyncGetTrainRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void GetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty* request, ::GRPCRailway::RailwayState* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty* request, ::GRPCRailway::RailwayState* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      virtual void GetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train* request, ::GRPCRailway::Train* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train* request, ::GRPCRailway::Train* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::RailwayState>* AsyncGetRailwayStateRaw(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::RailwayState>* PrepareAsyncGetRailwayStateRaw(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::Train>* AsyncGetTrainRaw(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::GRPCRailway::Train>* PrepareAsyncGetTrainRaw(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::GRPCRailway::RailwayState* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::RailwayState>> AsyncGetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::RailwayState>>(AsyncGetRailwayStateRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::RailwayState>> PrepareAsyncGetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::RailwayState>>(PrepareAsyncGetRailwayStateRaw(context, request, cq));
    }
    ::grpc::Status GetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::GRPCRailway::Train* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::Train>> AsyncGetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::Train>>(AsyncGetTrainRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::Train>> PrepareAsyncGetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::GRPCRailway::Train>>(PrepareAsyncGetTrainRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty* request, ::GRPCRailway::RailwayState* response, std::function<void(::grpc::Status)>) override;
      void GetRailwayState(::grpc::ClientContext* context, const ::GRPCRailway::Empty* request, ::GRPCRailway::RailwayState* response, ::grpc::ClientUnaryReactor* reactor) override;
      void GetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train* request, ::GRPCRailway::Train* response, std::function<void(::grpc::Status)>) override;
      void GetTrain(::grpc::ClientContext* context, const ::GRPCRailway::Train* request, ::GRPCRailway::Train* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::GRPCRailway::RailwayState>* AsyncGetRailwayStateRaw(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GRPCRailway::RailwayState>* PrepareAsyncGetRailwayStateRaw(::grpc::ClientContext* context, const ::GRPCRailway::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GRPCRailway::Train>* AsyncGetTrainRaw(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::GRPCRailway::Train>* PrepareAsyncGetTrainRaw(::grpc::ClientContext* context, const ::GRPCRailway::Train& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetRailwayState_;
    const ::grpc::internal::RpcMethod rpcmethod_GetTrain_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetRailwayState(::grpc::ServerContext* context, const ::GRPCRailway::Empty* request, ::GRPCRailway::RailwayState* response);
    virtual ::grpc::Status GetTrain(::grpc::ServerContext* context, const ::GRPCRailway::Train* request, ::GRPCRailway::Train* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetRailwayState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetRailwayState() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetRailwayState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRailwayState(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetRailwayState(::grpc::ServerContext* context, ::GRPCRailway::Empty* request, ::grpc::ServerAsyncResponseWriter< ::GRPCRailway::RailwayState>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTrain : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetTrain() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetTrain() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrain(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTrain(::grpc::ServerContext* context, ::GRPCRailway::Train* request, ::grpc::ServerAsyncResponseWriter< ::GRPCRailway::Train>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetRailwayState<WithAsyncMethod_GetTrain<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetRailwayState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetRailwayState() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::GRPCRailway::Empty, ::GRPCRailway::RailwayState>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::GRPCRailway::Empty* request, ::GRPCRailway::RailwayState* response) { return this->GetRailwayState(context, request, response); }));}
    void SetMessageAllocatorFor_GetRailwayState(
        ::grpc::MessageAllocator< ::GRPCRailway::Empty, ::GRPCRailway::RailwayState>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GRPCRailway::Empty, ::GRPCRailway::RailwayState>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetRailwayState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRailwayState(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetRailwayState(
      ::grpc::CallbackServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_GetTrain : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetTrain() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::GRPCRailway::Train, ::GRPCRailway::Train>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::GRPCRailway::Train* request, ::GRPCRailway::Train* response) { return this->GetTrain(context, request, response); }));}
    void SetMessageAllocatorFor_GetTrain(
        ::grpc::MessageAllocator< ::GRPCRailway::Train, ::GRPCRailway::Train>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::GRPCRailway::Train, ::GRPCRailway::Train>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetTrain() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrain(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetTrain(
      ::grpc::CallbackServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetRailwayState<WithCallbackMethod_GetTrain<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetRailwayState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetRailwayState() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetRailwayState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRailwayState(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetTrain : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetTrain() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetTrain() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrain(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetRailwayState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetRailwayState() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetRailwayState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRailwayState(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetRailwayState(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetTrain : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetTrain() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetTrain() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrain(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTrain(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetRailwayState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetRailwayState() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetRailwayState(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetRailwayState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetRailwayState(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetRailwayState(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetTrain : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetTrain() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetTrain(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetTrain() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTrain(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetTrain(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetRailwayState : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetRailwayState() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GRPCRailway::Empty, ::GRPCRailway::RailwayState>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GRPCRailway::Empty, ::GRPCRailway::RailwayState>* streamer) {
                       return this->StreamedGetRailwayState(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetRailwayState() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetRailwayState(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Empty* /*request*/, ::GRPCRailway::RailwayState* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetRailwayState(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GRPCRailway::Empty,::GRPCRailway::RailwayState>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetTrain : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetTrain() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::GRPCRailway::Train, ::GRPCRailway::Train>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::GRPCRailway::Train, ::GRPCRailway::Train>* streamer) {
                       return this->StreamedGetTrain(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetTrain() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetTrain(::grpc::ServerContext* /*context*/, const ::GRPCRailway::Train* /*request*/, ::GRPCRailway::Train* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetTrain(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::GRPCRailway::Train,::GRPCRailway::Train>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetRailwayState<WithStreamedUnaryMethod_GetTrain<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetRailwayState<WithStreamedUnaryMethod_GetTrain<Service > > StreamedService;
};

}  // namespace GRPCRailway


#endif  // GRPC_messages_2eproto__INCLUDED
