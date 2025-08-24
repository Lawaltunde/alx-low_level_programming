#include "lists.h"

/**
  * print_dlistint - function that prints all the elements
  * of a dlistint_t list
  * @h: pointer to the head of the list
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
