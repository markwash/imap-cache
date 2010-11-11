// Copyright 2010 <Mark Washenberger>

#ifndef SRC_MOCK_MOCK_TCP_SOCKET_H_
#define SRC_MOCK_MOCK_TCP_SOCKET_H_

#include "net/tcp-socket-interface.h"

namespace imapcache {
namespace mock {

class MockTcpSocket : public ::imapcache::net::TcpSocketInterface {
 public:
  void add_read_packet(const char *packet);
};

}  // namespace mock
}  // namespace imapcache

#endif  // SRC_MOCK_MOCK_TCP_SOCKET_H_
