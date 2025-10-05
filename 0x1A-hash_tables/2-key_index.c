#include "hash_tables.h"

/**
  * key_index - function that gives index of key
  * @key: key of the item
  * @size: size of hash table
  * Return: computed index of the item
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value  = hash_djb2(key), index;

	index = value % size;
	return (index);
}
