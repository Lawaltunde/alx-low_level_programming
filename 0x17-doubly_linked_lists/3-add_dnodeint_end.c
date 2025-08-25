#include "lists.h"

/**
  * add_dnodeint_end - function that adds a new node at
  *  the end of a dlistint_t list.
  * @head: pointer to the head pointer
  * @n: data
  * Return: the address of the new element, 
  *  or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!(*head))
	{
		newnode->prev = *head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
