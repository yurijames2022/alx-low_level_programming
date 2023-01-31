#include <stdio.h>

void before_print(void) __attribute__ ((constructor));

void before_print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
