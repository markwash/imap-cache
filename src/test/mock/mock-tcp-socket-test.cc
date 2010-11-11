// Copyright 2010 <Mark Washenberger>
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MockTcpSocketTest
#include <boost/test/unit_test.hpp>

#include "mock/mock-tcp-socket.h"

using ::imapcache::mock::MockTcpSocket;

struct F {
  F() : socket() {}
  MockTcpSocket socket;
};

BOOST_FIXTURE_TEST_CASE(test, F) {
}
