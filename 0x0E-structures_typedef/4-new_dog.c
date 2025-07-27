#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - function that creates a new dog
  * @name: pointer to char
  * @age: float type
  * @owner: pointer to char
  * Return: pointer to struct dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = &dog;
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
