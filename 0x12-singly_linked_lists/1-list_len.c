#include "lists.h"

/**
  * list_len - function that returns the number of elements
  * @h: pointer to head of the list
  * Return: unsigned int value
  */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned int num = 0;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
