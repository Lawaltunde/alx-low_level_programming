#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t
 * @head: head of the link.
 * @n: data of the node.
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));
	new_Node->n = n;
	if (*head == NULL)
	{
		*head = new_Node;
		new_Node->next = 0;
	}
	else
	{
		new_Node->next = *head;
		*head = new_Node;
	}
	return (*head);

}
