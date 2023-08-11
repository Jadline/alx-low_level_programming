#include <stdio.h>
/**
 * main - A program that prints out combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}
	putchar('\n');
	return (0);
}
