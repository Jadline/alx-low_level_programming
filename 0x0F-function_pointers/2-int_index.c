#include "function_pointers.h"

/**
 * int_index - Searches for an integer inside an array
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first element for which cmp function does not return 0,
 *         or -1 if no such element is found or in case of error.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
