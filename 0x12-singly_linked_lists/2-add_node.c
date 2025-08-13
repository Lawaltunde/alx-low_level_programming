#include "lists.h"
#include <string.h>
/**
  * add_node - function that adds
  * a new node at the beginning of a list_t list.
  * @head: double pointer to struc
  * @str: pointer to char
  * Return: Address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
