#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a list_t
  * @head: pointer to struct pointer
  * @str: pointer to char
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *newNode;
	int i = 0;

	if (str == NULL)
		return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;
	newNode->len = i;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
