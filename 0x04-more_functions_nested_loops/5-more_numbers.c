#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}

