#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument values
 */

int main(int argc, char *argv[])
{
	int mul;

	mul = (*argv[1] * *argv[2] + '0');
	return (mul);
}
