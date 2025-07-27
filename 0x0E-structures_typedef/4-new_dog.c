#include <stdio.h>
#include <stdlib.h>
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
	int i = 0, j = 0, l = 0, m = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (name[i++] != '\0')
		;
	while (owner[m++] != '\0')
		;
	name_cp = malloc(i + 1);
	owner_cp = malloc(m + 1);
	if (name_cp == NULL || owner_cp == NULL)
	{
		free(name_cp);
		free(ptr);
		return (NULL);
	}
	while (name[j] != '\0')
	{
		name_cp[j] = name[j];
		j++;
	}
	name_cp[j] = '\0';
	while (owner[l] != '\0')
	{
		owner_cp[l] = owner[l];
		l++;
	}
	owner_cp[l] = '\0';
	ptr->name = name_cp;
	ptr->age = age;
	ptr->owner = owner_cp;
	return (ptr);
}
