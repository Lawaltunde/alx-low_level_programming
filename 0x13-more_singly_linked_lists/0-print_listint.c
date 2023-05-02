#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: head of the linked list.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int r_val = 0;

	if (h == NULL)
	{
		h = 0;
	}

	else
	{
		while(h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			r_val++;
		}
	}
	return (r_val);
}
