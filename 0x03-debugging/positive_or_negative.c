#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the entry point
 * Return: Return 0
 * Description: A program with an if else conditional statement
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
