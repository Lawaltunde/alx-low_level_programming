#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: head of the linked list.
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if ((temp = head) != NULL)
	{
		head = temp;
		free(temp->str);
		free(temp->next);
		free(temp);
	}
}
