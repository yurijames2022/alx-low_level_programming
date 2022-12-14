#include "main.h"

/**
 * _abs - entry point
 * @i: for generating absolute value
 * Description: prints absolute value of n
 * Return: 0 (Success)
 */
int _abs(int i)
{

	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
