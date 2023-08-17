#include "main.h"
/**
 * print_line - A program to print straight line
 * @n: Variable to be checked
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		 _putchar('\n');
	}
}
