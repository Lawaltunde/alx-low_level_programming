#include "hash_tables.h"

/**
  * hash_table_print - function that prints a ht
  * @ht: hash table
  * Return: Nothing
  */

void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *htptr = ht;
	unsigned long int i = 0;
	hash_node_t  *result = NULL;
	int printed = 0;

	if (!htptr)
		return;

	printf("{");

	while (i < (htptr->size))
	{
		result = htptr->array[i];

		while (result)
		{
			if (printed)
				printf(", ");
			printf("'%s' : ''%s'", result->value, result->key);
			printed = 1;
			result = result->next;
		}
		i++;
	}
	printf("}\n");
}
