#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *my_node;

	while ((my_node = head) != NULL)
	{
		head = head->next;
		free(my_node->str);
		free(my_node);
	}
}
