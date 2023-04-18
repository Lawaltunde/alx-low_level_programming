#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: first element
 * @age: second element
 * @owner: third element
 * Return: NULL if the function fails else pointer
 * to the struct elements
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, countForName, countForOwner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || name == NULL || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (countForName = 0; name[countForName]; countForName++)
		;
	for (countForOwner = 0; owner[countForOwner]; countForOwner++)
		;

	ptr->name = malloc(countForName + 1);
	ptr->owner = malloc(countForOwner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < countForName; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < countForOwner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}

