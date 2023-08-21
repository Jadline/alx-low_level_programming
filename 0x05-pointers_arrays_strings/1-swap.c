#include "main.h"
/**
 * swap_int - A function that swaps two integers
 * @a: Pointer to be checked
 * @b: Pointer to be checked
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
