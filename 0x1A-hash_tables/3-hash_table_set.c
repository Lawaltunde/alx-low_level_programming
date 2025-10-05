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
	hash_node_t *temp = NULL;
	unsigned long int size_,  index_;

	if (!ht || !key || !*key)
		return (0);

	size_ = htptr->size;
	index_ = key_index((const unsigned char *)key, size_);

	if (size_ < index_)
	{
		free(htptr);
		return (0);
	}

	if (htptr->array[index_])
	{
		temp = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (!temp)
		{
			free(htptr);
			return (0);
		}
		temp->key = (char *)malloc(strlen(key) + 1);
		temp->value = (char *)malloc(strlen(value) + 1);
		if (!(temp->key) && !(temp->value))
		{
			free(htptr);
			return (0);
		}
		strcpy(temp->value, value);
		strcpy(temp->key, key);

		temp->next = (htptr->array[index_])->next;
		(htptr->array[index_])->next = temp;
	}
	else
	{
		(htptr->array[index_])->value = (char *)malloc(sizeof(value) + 1);
		(htptr->array[index_])->key = (char *)malloc(sizeof(key) + 1);
		if (!((htptr->array[index_])->value) && !((htptr->array[index_])->key))
		{
			free(htptr);
			return (0);
		}
		strcpy((htptr->array[index_])->value, value);
		strcpy((htptr->array[index_])->key, key);
	}
	return (1);
}
