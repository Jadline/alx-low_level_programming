#include <stdio.h>
/**
 * main - A program that prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			if (j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
			}
			for (k = 0; k <= 9; k++)
			{
				for (p = k + 1; p <= 9; p++)
				{
					putchar(k + '0');
					putchar(p + '0');
					if (i != 9 || j != 8 || k != 9 || p != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		
	}
	putchar('\n');
	return(0);
}
