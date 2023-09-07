#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * my_realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size (in bytes) of the previously allocated space.
 * @new_size: New size (in bytes) of the memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 * If ptr is NULL, equivalent to malloc(new_size).
 * If new_size is zero and ptr is not NULL, equivalent to free(ptr).
 * If malloc fails or new_size == old_size, returns ptr.
 */
void *my_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
