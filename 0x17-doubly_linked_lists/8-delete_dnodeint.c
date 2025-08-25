#include "lists.h"
/**
  * delete_dnodeint_at_index - function that deletes
  *  the node at index index of a dlistint_t linked list
  * @head: pointer to the header pointer
  * @index: index of the node that should be deleted
  * Returns: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nextnode;
	unsigned int i = 0, len = 0;

	if (!head || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}
	temp = *head;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	if (index >= i)
		return (-1);

	temp = *head;
	while (len < index)
	{
		temp = temp->next;
		len++;
	}
	nextnode = temp->next;
	if (temp->prev != NULL)
		temp->prev->next = nextnode;
	if (nextnode != NULL)
		nextnode->prev = temp->prev;
	free(temp);
	return (1);
}
