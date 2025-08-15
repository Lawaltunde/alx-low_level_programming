#include "lists.h"
/**
  * sum_listint - function that returns the sum of all
  * the data (n) of a listint_t
  * @head: pointer to node
  * Return: sum of all int value in each node, 0 if empty
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
