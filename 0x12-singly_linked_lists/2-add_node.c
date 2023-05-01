#include "lists.h"
#include "stdlib.h"
#include <string.h>

/**
 * add_node - a function that adds a new node\
 * at the beginning of a list_t list.
 * @head: pointer to the head pointer.
 * @str: pointer to the first member of the struct.
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int char_num = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	while (str[char_num] != '\0')
	{
		char_num++;
	}
	if (*head == 0)
	{
		*head = newNode;
		newNode->next = 0;
		newNode->len = char_num;
	}
	else
	{
		newNode->next = *head;
		newNode->len = char_num;
		*head = newNode;
	}
	return (*head);
}
