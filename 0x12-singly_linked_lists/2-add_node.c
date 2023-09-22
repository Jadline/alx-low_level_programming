#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the node
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int my_length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[my_length])
		my_length++;

	temp->len = my_length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
