AM_CXXFLAGS = -I$(top_srcdir)/src

check_PROGRAMS = \
	echo-server-test

echo_server_test_SOURCES = \
	echo-server-test.cc

echo_server_test_LDFLAGS = -lboost_unit_test_framework-mt

echo_server_test_LDADD = \
	$(top_builddir)/src/echo/libecho.a \
	$(top_builddir)/src/mock/libmock.a

TESTS = $(check_PROGRAMS)
