// Copyright 2010 <Mark Washenberger>
#include "echo/echo-server.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE EchoServerTest
#include <boost/test/unit_test.hpp>

struct F {
  F() {}
};

BOOST_FIXTURE_TEST_CASE(test, F) {
}
