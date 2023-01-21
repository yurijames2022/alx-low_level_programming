#include "3-calc.h"

/**
 * get_op_func - Selects operation according to user input
 * @s: The operator passed as argument
 * Return: Returns the function that corresponds to the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while ()
    {
	    
    }
}
