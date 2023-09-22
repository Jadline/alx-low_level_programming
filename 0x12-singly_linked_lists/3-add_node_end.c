#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node, *last_node;
	size_t num;

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);
	first_node->str = strdup(str);

	for (num = 0; str[num]; num++)
		;

	first_node->len = num;
	first_node->next = NULL;
	last_node = *head;

	if (last_node == NULL)
	{
		*head = first_node;
	}
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = first_node;
	}
	return (*head);
}
