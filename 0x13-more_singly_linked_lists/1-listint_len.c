#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - its a function that returns the number of elements
 * @h: its the head pointer
 *
 * Return: returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t p;
	const listint_t *temp;

	temp = h;
	p = 0;
	while (temp->next != NULL)
	{
		temp = temp->next;
		p++;
	}
	p = p + 1;
	return (p);
}
