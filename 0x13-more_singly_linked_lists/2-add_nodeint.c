#include "lists.h"

/**
  * add_nodeint - function that adds a new node at
  * the beginning of a listint_t
  * @head: pointer to pointer to struct
  * @n: int value
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

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
