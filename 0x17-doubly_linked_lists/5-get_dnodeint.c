#include "lists.h"
/**
  * get_dnodeint_at_index - function that returns the nth
  *  node of a dlistint_t linked list.
  * @head: pointer to the head
  * @index: the index of the node, starting from 0
  * Return: the nth node of a dlistint_t linked list
  *  if the node does not exist, return NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp != NULL && i <= index)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
