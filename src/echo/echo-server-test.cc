// Copyright 2010 <Mark Washenberger>
#include "echo/echo-server.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE EchoServerTest
#include <boost/test/unit_test.hpp>

#include "mock/mock-tcp-socket.h"

using ::imapcache::echo::EchoServer;
using ::imapcache::mock::MockTcpSocket;

struct F {
  F() : socket(), echo_server(&socket) {}
  MockTcpSocket socket;
  EchoServer echo_server;
};

BOOST_FIXTURE_TEST_CASE(test, F) {
}
