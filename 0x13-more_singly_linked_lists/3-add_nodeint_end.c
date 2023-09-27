#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to the first node
 * @n: data value
 *
 * Return:returns the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node->next = NULL;
	temp->next = new_node;
	return (new_node);
}
