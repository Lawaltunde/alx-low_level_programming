#include "lists.h"

/**
  * free_dlistint - function that frees a dlistint_t list
  * @head: pointer to the head of list
  *
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
