#include "hash_tables.h"

/**
  * hash_table_set - function that adds an element to the hash table
  * @ht: hash table
  * @key: the key of the item
  * @value: value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *htptr = ht;
	hash_node_t *temp = NULL, *current = NULL;
	unsigned long int size_,  index_;

	if (!ht || !key || !*key)
		return (0);
	size_ = htptr->size;
	index_ = key_index((const unsigned char *)key, size_);
	if (index_ >= size_)
	{
		return (0);
	}
	current = htptr->array[index_];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (0);

	temp->key = strdup(key);
	temp->value = strdup(value);
	if (!temp->key || !temp->value)
	{
		free(temp->key);
		free(temp->value);
		free(temp);
		return (0);
	}

	temp->next = htptr->array[index_];
	htptr->array[index_] = temp;
	return (1);
}
