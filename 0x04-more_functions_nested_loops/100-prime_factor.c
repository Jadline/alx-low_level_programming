#include <stdio.h>
#include "main.h"
/**
 * main  - Finds the largest prime factor
 * Return: The largest prime factor.
 */
int main(void)
{
	unsigned long int i, p = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((p % i == 0) && (p != i))
			p = p / i;
	}
	printf("%lu\n", p);
	return (0);
}

