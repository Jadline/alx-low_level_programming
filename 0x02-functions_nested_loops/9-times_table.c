#include "main.h"
#include <stdio.h>
/**
 * times_table - A programs that print the 9times table
 */
void times_table(void)
{
	int k, p, z;
	for (k = 0; k <= 9; k++)
	{
		_putchar(48);
		for (p = 1; p <= 9; p++)
		{
			_putchar(',');
			_putchar(' ');

			z = k * p;
			if ( z <= 9)
				_putchar(' ');
			else 
				_putchar ((z / 10) + 48);
			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}

