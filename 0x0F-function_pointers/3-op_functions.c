#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a: Value 1
 * @b: Value 2
 * Return: Sum of a and b;
 */

int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - Subtracts b from a
 * Return: Returns a minus b
 */

int op_sub(int a, int b)
{
	int sub = 0;

	sub = a - b;

	return (sub);
}
/**
 * op_mul - Function thjat returns multiplication of a and b
 * Return: return a times b
 */
int op_mul(int a, int b)
{
	int mul = 1;

	mul = a * b;

	return (mul);
}
/**
 * op_div - Functions that divides a by b
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	int div = 1;

	div = a/b;

	return (div);
}

/**
 * op_mod - Returns modulo of a and b
 * Return: Modulo of a and b
 */

int op_mod(int a, int b)
{
	return (a%b);
}
