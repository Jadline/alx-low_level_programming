#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
	int length = 0;
	int k;

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
