#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: variable to be checked
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
