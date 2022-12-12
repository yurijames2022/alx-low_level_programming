#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints all possible different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i ,j ,k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if ( i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
