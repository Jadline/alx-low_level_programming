#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *current;
	
	count = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n",current -> len, current->str);
		count++;
		current = current->next;
	}
	return (count);
}
