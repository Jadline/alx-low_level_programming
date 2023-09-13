#include "function_pointers.h"

/**
 * myname - Print a string character by character
 * @str: The string to be printed
 *
 * This function takes a string @str and prints it character by character.
 */
void myname(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
}
/**
 * print_name - Print a name using a given printing function
 * @name: The name to be printed
 * @f: A function pointer to the printing function
 *
 * This function takes a name @name and a function pointer @f. It calls the
 * function pointed to by @f to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
