#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  a function that adds a new node at the end
 * of a list_t list.
 * @head: header of the linked list.
 * @str: data of linked list
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp_Node;
	unsigned int num_char = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[num_char] != '\0')
		num_char++;

	temp_Node = *head;
	newNode->next = 0;
	newNode->len =num_char;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = 0;
	}
	else
	{
		while (temp_Node->next != NULL)
			temp_Node = temp_Node->next;

		temp_Node->next = newNode;
	}
	return (*head);
}
