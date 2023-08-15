#include "main.h"
/**
 * times_table - A programs that print the 9times table
 */
void times_table(void)
{
	int rows = 10;
	int cols = 10;
	int i, j;

	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= cols; j++)
		{
			int result = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar(' ');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(' ');
			}
			if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
			}
			else if (result >= 10)
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		 _putchar('\n');
	}
}
