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
		int r, h, s;

		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1 ; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
