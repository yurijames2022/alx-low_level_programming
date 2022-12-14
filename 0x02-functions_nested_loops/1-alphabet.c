#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: A program that prints the alphabet
 *
 *
 */
void print_alphabet(void)
{
	char al[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (al[i] != '\0')
	{
		_putchar(al[i]);
		i++;
	}
}
