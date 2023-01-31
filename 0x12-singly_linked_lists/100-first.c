#include <stdio.h>
/**
 * before_print - Prints before main executes
 */
void before_print(void) __attribute__ ((constructor));

void before_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
