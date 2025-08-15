#include "lists.h"

/**
  * pop_listint - function that deletes the head node of a listint_t
  * @head: pointer to struct pointer
  * Return: int value of a node
  */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int val;

	if (head == NULL || *head == NULL)
		return (0);

	*head = temp->next;
	val = temp->n;
	free(temp);
	return (val);
}
