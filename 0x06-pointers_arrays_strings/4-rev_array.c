#include "main.h"
/**
 * reverse_array - reverses an array
 * @n: number of elements in the array
 * @a: The array
 */
void reverse_array(int *a, int n)
{
	int k = 0;
	int z;

	n = n - 1;
	for (k = 0; k < n; k++)
	{
		z = a[k];
		a[k] = a[n];
		a[n] = z;
		n--;
	}
}
