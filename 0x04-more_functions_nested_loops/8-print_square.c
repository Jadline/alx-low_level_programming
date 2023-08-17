#include "main.h"
/**
 * print_square - A program that  prints a square
 * @size: Variable name
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;
		int p;

		for (k = 1; k <= size; k++)
		{
			for (p = 1; p <= size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
