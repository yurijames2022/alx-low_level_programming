#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory
 * @d: Object structure to be printed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
