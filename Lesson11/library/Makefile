SRCS += files.c
SRCS += ls_files.c
LIBNAME += libls_files.so

all:
	gcc $(SRCS) -o $(LIBNAME) -shared -fPIC

install:
	cp $(LIBNAME) /usr/lib
	cp files.h /usr/include

uninstall:
	rm -f /usr/lib/$(LIBNAME) /usr/include/files.h

clean:
	rm -f $(LIBNAME) *.o