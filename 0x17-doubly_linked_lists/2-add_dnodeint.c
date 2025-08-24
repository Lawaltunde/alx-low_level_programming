#include "lists.h"

/**
  * add_dnodeint - function that adds a new node
  * at the beginning of a dlistint_t list
  * @head: pointer to header pointer
  * @n: data to be added
  * Return: the address of the new
  * element, or NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->prev = *head;
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
