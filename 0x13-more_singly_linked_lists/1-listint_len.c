#include "lists.h"

/**
 * listint_len -  function that returns the number of
 * elements in a linked listint_t list.
 * @h: head of the linked list
 * Retunr: returns the number of elements in a linked.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp_Node;
	unsigned int count = 0;

	temp_Node = malloc(sizeof(listint_t));
	temp_Node = h;

	if (h == NULL)
		return (count);

	while (temp_Node != NULL)
	{
		temp_Node = temp_Node->next;
		count++;
	}
	return (count);
}
