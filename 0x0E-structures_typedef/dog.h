#ifndef DOG_H
#define DOG_H
/**
  * struct dog - type struct containing three variables
  * @name: pointer to char
  * @owner: pointer to char
  * @age: type float
  * Description: a struct containing three variables: two pointers
  * char and one float.
  */
struct dog{
	char *name;
	char *owner;
	float age;
};
#endif
