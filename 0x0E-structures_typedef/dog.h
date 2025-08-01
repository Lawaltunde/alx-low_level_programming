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
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
