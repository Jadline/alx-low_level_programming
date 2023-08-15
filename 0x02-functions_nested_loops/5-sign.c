#include "main.h"
/**
 * print_sign - A program that prints the sign of a number
 * *
 * @n: the value to be checked
 * Return: 0 if n is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
