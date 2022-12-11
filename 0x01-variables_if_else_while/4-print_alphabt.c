#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 * Description: Display a-z without q and e
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
