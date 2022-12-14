#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: The parameter for the function
 * Description: print from n to 98
 * Return: Return 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");

}
