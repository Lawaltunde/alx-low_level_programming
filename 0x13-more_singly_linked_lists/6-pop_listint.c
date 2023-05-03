#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int haed_node;
	listint_t *h;
	listint_t *new_Node;

	if (*head == NULL)
		return (0);

	new_Node = *head;

	head_node = curr->n;

	h = new_Node->next;

	free(new_Node);

	*head = h;

	return (head_node);
}
