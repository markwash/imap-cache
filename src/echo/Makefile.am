AM_CXXFLAGS = -I$(top_srcdir)/src

check_PROGRAMS = \
	echo-server-test

echo_server_test_SOURCES = \
	echo-server-test.cc

echo_server_test_LDFLAGS = -lboost_unit_test_framework-mt

TESTS = $(check_PROGRAMS)
