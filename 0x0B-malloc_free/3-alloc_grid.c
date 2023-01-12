#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns pointer to 2d array of integers
 * @width: Width of array
 * @height: Height of array
 * Return: returns pointer of a 2d array if Success and NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++)
	{
		twoD[hi] = malloc(sizeof(int) * width);

		if (twoD[hi] == NULL)
		{
			for (; hi >= 0; hi--)
				free(twoD[hi]);

			free(twoD);
			return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			twoD[hi][wi] = 0;
	}

	return (twoD);
}
