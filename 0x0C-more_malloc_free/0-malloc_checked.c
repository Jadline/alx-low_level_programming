#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory block to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, exit the program with status value 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
