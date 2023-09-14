#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list args;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
