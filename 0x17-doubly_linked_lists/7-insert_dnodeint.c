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

	if (*h == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	current = *h;
	while (i < idx)
	{
		current = current->next;
		if(current == NULL && i < idx)
			return (NULL);
		i++;
	}
	nextnode = current->next;
	newnode->prev = current;
	current->next = newnode;
	newnode->next = nextnode;

	return (newnode);
}
