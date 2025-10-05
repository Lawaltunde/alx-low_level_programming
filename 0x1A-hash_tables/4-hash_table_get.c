#include "hash_tables.h"

/**
  * hash_table_get - function that retrieve a value associated with
  * a key
  * @ht: pointer to hast table
  * @key: key of item to retrieve
  * return: value associated with the element or NULL
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const hash_table_t *htptr = ht;
	hash_node_t *current = NULL;
	unsigned long int index;


	if (!ht || !*key || !key)
		return (NULL);

	index = key_index((unsigned char *)key, htptr->size);
	current = htptr->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}
	free(current);
	return (NULL);
}
