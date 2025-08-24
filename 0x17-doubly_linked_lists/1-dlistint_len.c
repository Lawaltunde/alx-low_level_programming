#include "lists.h"

/**
  * dlistint_len - function that returns the number of
  * elements in a linked dlistint_t list.
  * @h: header of the list
  * Return: the number of elements in a linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
