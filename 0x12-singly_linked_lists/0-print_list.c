#include "lists.h"

/**
  * print_list - function that prints all the elements of a list_t list
  * @h: pointer to struct list_t
  * Return: unsigned int value
  */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}
	return (i);
}
