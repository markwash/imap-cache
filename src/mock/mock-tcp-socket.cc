// Copyright 2010 <Mark Washenberger>
#include "mock/mock-tcp-socket.h"

namespace imapcache {
namespace mock {

using ::imapcache::net::ReadHandlerInterface;
using ::imapcache::net::WriteHandlerInterface;

void MockTcpSocket::add_read_packet(const char *packet) {
}

}  // namespace mock
}  // namespace imapcache
