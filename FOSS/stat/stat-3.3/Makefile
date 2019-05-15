# This is the Makefile for stat

#
# If you have SELINUX add "sec=yes" to the make command line
#
ifdef sec
SEC_FLAGS=-DFLASK_LINUX -I/usr/include/selinux
LDFLAGS=-lsecure
endif
CFLAGS=-O2 -g -Wall -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 $(SEC_FLAGS)
CC=gcc
DESTDIR=

stat: stat.c
	$(CC) $(CFLAGS) -o stat stat.c $(LDFLAGS)

install: stat
	install -s -o root -g root -m 755 stat ${DESTDIR}/usr/bin
	install -o root -g root -m 644 stat.1 ${DESTDIR}/usr/share/man/man1

clean:
	/bin/rm stat -f *~
