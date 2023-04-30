#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to node passed as an argument to the fns.
 * Return: number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	unsigned int num = 0;

	while (h != 0)
	{
		num++;
		h = h->next;
	}
	return (num);
}
