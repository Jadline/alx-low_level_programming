#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint -  this function that deletes a node
 * @head:its a pointer to the a node
 *
 * Return:it returns head node data n
 */
int pop_listint(listint_t **head)
{
	int my_data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	my_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (my_data);
}
