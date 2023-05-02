#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: head of the linked list.
 * @n: linked list data.
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node, *temp;

	new_Node = malloc (sizeof(listint_t));
	if(new_Node == NULL)
		return  (NULL);

	new_Node->n = n;
	new_Node->next = 0;

	temp = *head;
	if (*head == NULL)
		*head = new_Node;
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_Node;
	}

	return (*head);

}
