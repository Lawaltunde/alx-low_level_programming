#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at index
  * @head: pointer to struct pointer
  * @index: index of node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0 && (*head)->next != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	if (index == 0 && (*head)->next == NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (index > 0)
	{
		if (temp->next == NULL && index > 0)
			return (-1);
		next = temp;
		temp = temp->next;
		index--;
	}
	next->next = temp->next;
	free(temp);
	return (1);
}
