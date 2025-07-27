#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - function that initialize a variable
  * of type struct dog
  * @d: pointer to struct dog
  * @name: pointer to char
  * @age: float type
  * @owner: pointer to char
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
}
