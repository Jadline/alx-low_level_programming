#include "main.h"
/**
 * print_triangle - A program that prints a triangle
 * @size: Variable name
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	if (size  <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;
		int p;

		for (k = 1; k <= size; k++)
		{
			for (p = 1; p <= 2 * size - 1; p++)
			{
				if ((p >= size - (k - 1)) && (p <= size + (k - 1)))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
