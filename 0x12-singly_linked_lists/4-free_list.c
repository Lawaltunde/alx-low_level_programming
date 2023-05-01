#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: head of the linked list.
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
