#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - This is afunction that prints struct dog
 * @d: The object structure
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name:(nil)\n");
	}
	else
	{

	printf("Name: %s\n", d->name);
	}

	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{

	printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{

	printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
	{
		return;

	}
}
