#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: code for displaying alphabet in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
