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
	int i, counterForName = 0, counterForOwner = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL || name == NULL || owner == NULL)
	{
		free(ptr);
		return (NULL);
	}

	while (name[counterForName])
	{
		;
		counterForName++;
	}
	while (owner[counterForOwner])
	{
		;
		counterForOwner++;
	}


	ptr->name = malloc(counterForName + 1);
	ptr->owner = malloc(counterForOwner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < counterForName; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < counterForOwner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);


}

