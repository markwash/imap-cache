// Copyright 2010 <Mark Washenberger>

#ifndef SRC_NET_TCP_SOCKET_INTERFACE_H_
#define SRC_NET_TCP_SOCKET_INTERFACE_H_

#include <cstddef>

namespace imapcache {
namespace net {

class Error {
};

class ReadHandlerInterface {
 public:
  virtual void handle_read(const Error &error, std::size_t length_read) = 0;
  virtual ~ReadHandlerInterface();
};

class WriteHandlerInterface {
 public:
  virtual void handle_write(const Error &error, std::size_t length_written) = 0;
  virtual ~WriteHandlerInterface();
};

class TcpSocketInterface {
 public:
//  virtual void read_some(char *buffer, std::size_t max_length,
//                         ReadHandlerInterface *handler) = 0;
//  virtual void read_all(char *buffer, std::size_t length,
//                        ReadHandlerInterface *handler) = 0;
//  virtual void write_some(const char *buffer, std::size_t max_length,
//                          WriteHandlerInterface *handler) = 0;
//  virtual void write_all(const char *buffer, std::size_t length,
//                         WriteHandlerInterface *handler) = 0;
  virtual ~TcpSocketInterface() {}
};

}  // namespace net
}  // namespace imapcache

#endif  // SRC_NET_TCP_SOCKET_INTERFACE_H_
