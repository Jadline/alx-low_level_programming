#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: pointer to an integer
 * @size : integer data type
 */
void print_diagsums(int *a, int size)
{
	int first_sum, second_sum, p;

	first_sum = 0;
	second_sum = 0;

	for (p = 0; p < size; p++)
	{
		first_sum = first_sum + a[p * size + p];
	}
	for (p = size - 1; p >= 0; p--)
	{
		second_sum += a[p * size + (size - p - 1)];
	}
	printf("%d, %d\n", first_sum, second_sum);
}
