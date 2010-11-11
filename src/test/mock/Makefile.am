AM_CXXFLAGS = -I$(top_srcdir)/src

check_PROGRAMS = \
	mock-tcp-socket-test

mock_tcp_socket_test_SOURCES = \
	mock-tcp-socket-test.cc

mock_tcp_socket_test_LDFLAGS = -lboost_unit_test_framework-mt

mock_tcp_socket_test_LDADD = \
	$(top_builddir)/src/mock/libmock.a

TESTS = $(check_PROGRAMS)
