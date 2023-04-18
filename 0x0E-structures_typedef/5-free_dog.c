#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function frees dogs.
 * @d: variable of struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
