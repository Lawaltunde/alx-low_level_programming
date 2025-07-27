#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
  * new_dog - function that creates a new dog
  * @name: pointer to char
  * @age: float type
  * @owner: pointer to char
  * Return: pointer to struct dog_t, or NULL if failure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *name_cp, *owner_cp;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	name_cp = malloc(strlen(name) + 1);
	if (name_cp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	owner_cp = malloc(strlen(owner) + 1);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(ptr);
		return (NULL);
	}
	strcpy(name_cp, name);
	strcpy(owner_cp, owner);

	ptr->name = name_cp;
	ptr->age = age;
	ptr->owner = owner_cp;
	return (ptr);
}
