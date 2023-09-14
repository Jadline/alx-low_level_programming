#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints string
 * @separator : a pointer to a string character
 * @n : number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		unsigned int k;

		va_list args;

		va_start(args, n);

		for (k = 0; k < n; k++)
		{
			const char *str = va_arg(args, const char *);

			if (str != NULL)
			{
				printf("%s", str);
				if (k < n - 1)
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("nil");
			}
		}
		va_end(args);
	}
	printf("\n");
}

