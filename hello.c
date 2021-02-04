#include <stdio.h>

extern int foo(int, int);
int main(void) {
	printf("Hello, World! %d\n", foo(3,4));
}
