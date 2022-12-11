#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing single digi numbers in ascending order with commas
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	j = ',';

	k = ' ';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(j);
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
