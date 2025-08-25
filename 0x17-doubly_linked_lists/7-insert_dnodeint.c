#include "lists.h"
/**
  * insert_dnodeint_at_index - function that inserts a
  *  new node at a given position
  * @h: pointer to header pointer
  * @idx: index where to add new node
  * @n: data to add
  * Return: the address of the new node,
  *  or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *nextnode, *newnode;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			newnode->next = *h;
			(*h)->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}

	current = *h;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}

	if (idx > i)
	{
		free(newnode);
		return (NULL);
	}

	current = *h;
	i = 0;
	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	nextnode = current->next;
	newnode->prev = current;
	if (nextnode != NULL)
		current->next->prev = newnode;
	newnode->next = nextnode;
	current->next = newnode;

	return (newnode);
}
