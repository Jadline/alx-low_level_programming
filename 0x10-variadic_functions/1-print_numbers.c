#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator : pointer to the string character
 * @n : number of arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		unsigned int k;

		va_list args;

		va_start(args, n);

		for (k = 0; k < n; k++)
		{
			int x = va_arg(args, int);

			printf("%d", x);
			if (k < n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
