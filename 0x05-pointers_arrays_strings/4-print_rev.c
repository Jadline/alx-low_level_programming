#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int k;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (k = length - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
