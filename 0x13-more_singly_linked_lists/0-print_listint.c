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

	temp_Node = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		h = 0;
	}
	temp_Node = h;

	while (temp_Node != NULL)
	{
		printf("%d\n", temp_Node->n);
		r_val++;
		temp_Node = temp_Node->next;
	}
	return (r_val);
}
