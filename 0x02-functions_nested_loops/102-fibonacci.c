#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the sum of fibonaccis
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fibon1 = 0, fibon2 = 1, sum;
	unsigned long  total_sum = 0;

	while (1)
	{
		sum = fibon1 + fibon2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		fibon1 = fibon2;
		fibon2 = sum;
	}
	printf("%lu\n", total_sum);
	return (0);
}
