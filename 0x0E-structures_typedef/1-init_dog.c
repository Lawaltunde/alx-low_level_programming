#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: structure variable.
 * @name: first member of the structure.
 * @age: second member of the structure.
 * @owner: third member of the structure.
 * Return: void.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;


}
