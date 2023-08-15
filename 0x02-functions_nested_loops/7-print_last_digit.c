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
	int last_digit;


	if (k < 0)
		last_digit = -1 * (k % 10);
	else
		last_digit = k % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
