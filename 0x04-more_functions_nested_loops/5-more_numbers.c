#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: prints 0-14 10 times
 */
void more_numbers(void)
{
	int i, j;
	int row = 9;
	int col = 14;

	for (i = 0; i <= row; i++)
	{
		for ( j = 0; j <= col; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
	

}
