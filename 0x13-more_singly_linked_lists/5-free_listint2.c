#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_Node, new_Node;

	if (head != NULL)
	{
		new_Node = *head;
		while ((temp_Node = new_Node) != NULL)
		{
			new_Node = new_Node->next;
			free(temp_Node);
		}
		*head = NULL;
	}
}
