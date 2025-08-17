#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t linked list
  * @head: pointer to the head pointer
  * Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nextnode;

	if (*head == NULL)
		return (NULL);

	nextnode = *head;
	prev = NULL;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = nextnode;
	}
	*head = prev;
	return (*head);
}
