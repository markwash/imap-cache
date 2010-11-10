// Copyright 2010 <Mark Washenberger>

#ifndef SRC_MOCK_MOCK_TCP_SOCKET_H_
#define SRC_MOCK_MOCK_TCP_SOCKET_H_

#include "net/tcp-socket-interface.h"

namespace imapcache {
namespace mock {

class MockTcpSocket : public ::imapcache::net::TcpSocketInterface {

 public:
  virtual void read_some(char *buffer, std::size_t max_length,
                         ::imapcache::net::ReadHandlerInterface *handler);
  virtual void read_all(char *buffer, std::size_t length,
                        ::imapcache::net::ReadHandlerInterface *handler);
  virtual void write_some(const char *buffer, std::size_t max_length,
                          ::imapcache::net::WriteHandlerInterface *handler);
  virtual void write_all(const char *buffer, std::size_t length,
                         ::imapcache::net::WriteHandlerInterface *handler);
  ~MockTcpSocket() {}
};

}  // namespace mock
}  // namespace imapcache

#endif  // SRC_MOCK_MOCK_TCP_SOCKET_H_
