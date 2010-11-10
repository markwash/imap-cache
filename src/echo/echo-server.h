// Copyright 2010 <Mark Washenberger>

#ifndef SRC_ECHO_ECHO_SERVER_H_
#define SRC_ECHO_ECHO_SERVER_H_

namespace imapcache {

namespace net {
class TcpSocketInterface;
}  // namespace net

namespace echo {

class EchoServer {
 public:
  explicit EchoServer(::imapcache::net::TcpSocketInterface *socket);
};

}  // namespace echo
}  // namespace imapcache

#endif  // SRC_ECHO_ECHO_SERVER_H_
