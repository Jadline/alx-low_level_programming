#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alwaays 0 (Success)
 */
int main(void)
{
	unsigned long count = 0;
	unsigned long fibon1 = 0, fibon2 = 1, sum;

	while (fibon2 <= 4000000)
	{
		sum = fibon1 + fibon2;

		fibon1 = fibon2;
		fibon2 = sum;

		if (sum % 2 == 0)
			count += sum;
	}
	printf("%lu\n", count);
	return (0);
}
