#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head ofthe linked list.
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_Node;

	while ((temp_Node = head) != NULL)
	{
		free(temp_Node);
		head = head->next;
	}
	temp_Node = NULL;
	
}
