#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - this function returns the number of nodes
 * @h: this is a pointer to first node
 *
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t p;
	const listint_t *temp;

	temp = h;
	p = 0;
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		p++;
	}
	printf("%d\n", temp->n);
	p = p + 1;
	return (p);
}
