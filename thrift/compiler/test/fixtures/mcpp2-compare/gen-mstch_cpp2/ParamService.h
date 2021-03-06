/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>

#include "includes_types.h"

#include <folly/small_vector.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {

class ParamServiceSvAsyncIf {
 public:
  virtual ~ParamServiceSvAsyncIf() {}
  virtual void async_tm_void_i16_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int16_t param1) = 0;
  virtual void async_void_i16_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int16_t param1) = delete;
  virtual folly::Future<folly::Unit> future_void_i16_param(int16_t param1) = 0;
  virtual void async_tm_void_i32_i64_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t param1, int64_t param2) = 0;
  virtual void async_void_i32_i64_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t param1, int64_t param2) = delete;
  virtual folly::Future<folly::Unit> future_void_i32_i64_param(int32_t param1, int64_t param2) = 0;
};

class ParamServiceAsyncProcessor;

class ParamServiceSvIf : public ParamServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef ParamServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void void_i16_param(int16_t /*param1*/);
  folly::Future<folly::Unit> future_void_i16_param(int16_t param1) override;
  void async_tm_void_i16_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int16_t param1) override;
  virtual void void_i32_i64_param(int32_t /*param1*/, int64_t /*param2*/);
  folly::Future<folly::Unit> future_void_i32_i64_param(int32_t param1, int64_t param2) override;
  void async_tm_void_i32_i64_param(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t param1, int64_t param2) override;
};

class ParamServiceSvNull : public ParamServiceSvIf {
 public:
  void void_i16_param(int16_t /*param1*/) override;
  void void_i32_i64_param(int32_t /*param1*/, int64_t /*param2*/) override;
};

class ParamServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  ParamServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<ParamServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const ParamServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const ParamServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<ParamServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const ParamServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const ParamServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_void_i16_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_void_i16_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_void_i16_param(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_void_i16_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_void_i16_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_void_i32_i64_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_void_i32_i64_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_void_i32_i64_param(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_void_i32_i64_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,std::exception_ptr ep,apache::thrift::Cpp2RequestContext* reqCtx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_void_i32_i64_param(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  ParamServiceAsyncProcessor(ParamServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~ParamServiceAsyncProcessor() {}
};

class ParamServiceAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~ParamServiceAsyncClient() {}

  ParamServiceAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
  virtual void void_i16_param(std::unique_ptr<apache::thrift::RequestCallback> callback, int16_t param1);
  virtual void void_i16_param(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int16_t param1);
 private:
  virtual void void_i16_paramImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int16_t param1);
 public:
  virtual void sync_void_i16_param(int16_t param1);
  virtual void sync_void_i16_param(apache::thrift::RpcOptions& rpcOptions, int16_t param1);
  virtual folly::Future<folly::Unit> future_void_i16_param(int16_t param1);
  virtual folly::Future<folly::Unit> future_void_i16_param(apache::thrift::RpcOptions& rpcOptions, int16_t param1);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_void_i16_param(apache::thrift::RpcOptions& rpcOptions, int16_t param1);
  virtual void void_i16_param(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int16_t param1);
  static folly::exception_wrapper recv_wrapped_void_i16_param(::apache::thrift::ClientReceiveState& state);
  static void recv_void_i16_param(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_void_i16_param(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_void_i16_param(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void void_i16_paramT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int16_t param1);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_void_i16_paramT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_void_i16_paramT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void void_i32_i64_param(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int64_t param2);
  virtual void void_i32_i64_param(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int64_t param2);
 private:
  virtual void void_i32_i64_paramImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int64_t param2);
 public:
  virtual void sync_void_i32_i64_param(int32_t param1, int64_t param2);
  virtual void sync_void_i32_i64_param(apache::thrift::RpcOptions& rpcOptions, int32_t param1, int64_t param2);
  virtual folly::Future<folly::Unit> future_void_i32_i64_param(int32_t param1, int64_t param2);
  virtual folly::Future<folly::Unit> future_void_i32_i64_param(apache::thrift::RpcOptions& rpcOptions, int32_t param1, int64_t param2);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_void_i32_i64_param(apache::thrift::RpcOptions& rpcOptions, int32_t param1, int64_t param2);
  virtual void void_i32_i64_param(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t param1, int64_t param2);
  static folly::exception_wrapper recv_wrapped_void_i32_i64_param(::apache::thrift::ClientReceiveState& state);
  static void recv_void_i32_i64_param(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_void_i32_i64_param(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_void_i32_i64_param(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void void_i32_i64_paramT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t param1, int64_t param2);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_void_i32_i64_paramT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_void_i32_i64_paramT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
