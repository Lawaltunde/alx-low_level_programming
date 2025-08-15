#include "lists.h"

/**
  * listint_len - function that returns the number of elements in list
  * @h: pointer to struct
  * Return: size_t value
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t i = 0;

	if (temp == NULL)
		return (i);

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
