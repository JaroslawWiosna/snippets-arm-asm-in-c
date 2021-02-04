
.PHONY: all
all: mix

mix:
	gcc -ggdb -o mix foo.s hello.c
