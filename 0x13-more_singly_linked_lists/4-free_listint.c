#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head ofthe linked list.
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if ((temp = head) != NULL)
	{
		free(head->next);
		free(temp);
	}
}
