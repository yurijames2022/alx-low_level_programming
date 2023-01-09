#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Arguments values
 * Return: Returns (0) Success
 * Description: Prints all args it receives
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
