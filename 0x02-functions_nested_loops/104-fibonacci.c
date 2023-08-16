#include "main.h"i
#include <stdio.h>
/**
 * numL - return the length of string
 * @k: Variable names
 *
 * Return: number of digits
 */
int numL(int k)
{
	int length = 0;

	if (!k)
		return (1);
	while (k)
	{
		k = k / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - Entry point
 *
 * Description: Prints the first 98 fibonaccis
 *
 * Return: Alwaus 0 (Success)
 */
int main(void)
{
	int p, z;
	unsigned long fb1 = 1, f2 = 2, s;
	unsigned long  m = 100000000, fib10 = 0;
	unsigned long  fib20 = 0, s1 = 0;

	for (p = 1; p <= 98; p++)
	{
		if (fib10 > 0)
			printf("%lu", fib10);
		z = numL(m) - 1 - numL(fb1);
		while (fib10 > 0 && z > 0)
		{
			printf("%d", 0);
			z--;
		}
		printf("%lu", fb1);
		s = (fb1 + f2) % m;
		s1 = fib10 + fib20 + (fb1 + f2) / m;
		fb1 = f2;
		fib10 = fib20;
		f2 = s;
		fib20 = s1;
		if (p != 98)
		{
			printf(",");
			printf(" ");
		}
		else
			printf("\n");
	}
	return (0);
}
