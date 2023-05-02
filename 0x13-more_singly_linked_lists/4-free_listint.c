#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head ofthe linked list.
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free(head->next);
		free(head);
	}
}
