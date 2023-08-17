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
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
