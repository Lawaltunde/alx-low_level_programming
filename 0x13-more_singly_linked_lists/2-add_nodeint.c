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

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = *head;
	*head = new_Node;

	return (*head);

}
