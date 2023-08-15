#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - A program that prints the last digit
 * Description: Prints the last digit of a number
 * @k: Variable name
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int k)
{
	int last_digit  = (k % 10);

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	return (last_digit);
}
