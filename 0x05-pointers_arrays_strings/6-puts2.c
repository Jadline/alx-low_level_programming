#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: Pointer to a string
 */
void puts2(char *str)
{
	int k = 0;

	while (str[k] !=  '\0')
	{
		_putchar(str[k]);
		k += 2;
	}
	_putchar('\n');
}
