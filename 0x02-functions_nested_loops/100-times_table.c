#include "main.h"
/**
 * print_times_table - A program to print table of n
 *
 * @n: starting number
 */
void print_times_table(int n)
{
	int z, p, k;

	if (n <= 15 && n >= 0)
	{
		for (k = 0; k <= n; ++k)
		{
			_putchar(48);
			for (p = 1; p <= n; ++p)
			{
				_putchar(',');
				_putchar(' ');

				z = k * p;
				if (z <= 9)
					_putchar(' ');
				if (z <= 99)
					_putchar(' ');
				if (z >= 100)
				{
					_putchar((z / 100) + 48);
					_putchar((z / 10) % 10 + 48);
				}				else if (z <= 99 && z >= 10)
					_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			_putchar('\n');
		}
	}
}


