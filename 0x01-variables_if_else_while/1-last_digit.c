#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 * Description: Source code for last digit of random number
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero", n, l);
	}
	return (0);
}
