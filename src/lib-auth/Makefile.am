noinst_LTLIBRARIES = libauth.la

AM_CPPFLAGS = \
	-I$(top_srcdir)/src/lib \
	-I$(top_srcdir)/src/lib-master

libauth_la_SOURCES = \
	auth-client.c \
	auth-client-request.c \
	auth-client-connection.c \
	auth-master.c

headers = \
	auth-client.h \
	auth-client-interface.h \
	auth-client-private.h \
	auth-master.h

pkginc_libdir=$(pkgincludedir)
pkginc_lib_HEADERS = $(headers)
