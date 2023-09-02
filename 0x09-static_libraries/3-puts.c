#include "main.h"
/**
 * _puts - Prints ut a string
 * @str: Pointer to be checked
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
