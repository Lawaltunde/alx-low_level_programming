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

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}

