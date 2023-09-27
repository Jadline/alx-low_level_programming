#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - this function returns the address of new element
 * @head: its a pointer to the first element
 * @n:its the data value
 *
 * Return:returns the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

