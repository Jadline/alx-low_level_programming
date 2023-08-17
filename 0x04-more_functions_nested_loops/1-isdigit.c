#include "main.h"
/**
 * _isdigit - A program that checks for a digit (0 through 9)
 * @c: Variable to be checked
 * Return: 1 if its a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
