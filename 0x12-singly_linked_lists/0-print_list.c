#include "lists.h"
#include <stdio.h>

/**
 * print_list -  function that prints all the elements
 * of a list_t list.
 * @h: pointer to the node passing as an argument.
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
		}
		h = h->next;
	}
		return (n);
}

