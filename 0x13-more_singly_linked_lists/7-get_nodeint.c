#include "lists.h"

/**
  * get_nodeint_at_index -function that returns the nth node of a listint_t
  * @head: head of node
  * @index: index of the node to return
  * Return: Node or null if the node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (index > i)
		return (NULL);

	temp = head;
	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
