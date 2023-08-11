#include <stdio.h>
/**
 * main - A program that prints base sixteen numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		if (num >= 10 && num <= 15)
		{
			putchar('a' + (num - 10));
		}
		else
		{
			putchar('0' + num);
		}
	}
	putchar('\n');
	return (0);

}
