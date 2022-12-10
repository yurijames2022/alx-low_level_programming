#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: source code for printing alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char al;
	for (al = 'a' ; al <= 'z' ; al++)
	{
	putchar(al);
	}
	putchar('\n');
	return (0);
}
