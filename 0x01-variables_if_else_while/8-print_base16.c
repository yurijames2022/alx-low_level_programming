#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 * Description: display all numbers of base16
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
