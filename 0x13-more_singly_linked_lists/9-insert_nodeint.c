#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node
  *  at given position.
  * @head: pointer to struct pointer
  * @idx: index where new node should be added
  * @n: int value to be inserted
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prevNode = NULL, *newNode;
	size_t i = 0;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (head == NULL || *head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	temp = *head;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (idx > i)
	{
		free(newNode);
		return (NULL);
	}
	temp = *head;
	while (idx > 0)
	{
		prevNode = temp;
		temp = temp->next;
		idx--;
	}
	prevNode->next = newNode;
	newNode->next = temp;

	return (newNode);
}
