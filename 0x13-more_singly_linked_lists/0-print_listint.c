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
	const listint_t *temp_Node;
	unsigned int r_val = 0;

	if (h == NULL)
	{
		h = 0;
	}
	temp_Node = h;
	h = temp_Node;

	while (temp_Node != NULL)
	{
		printf("%d\n", temp_Node->n);
		temp_Node = temp_Node->next;
		r_val++;
	}
	return (r_val);
}
