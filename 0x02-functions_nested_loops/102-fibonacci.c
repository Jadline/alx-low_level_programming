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
	int i;
	unsigned long fibon1 = 0, fibon2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fibon1 + fibon2;
		printf("%lu", sum);

		fibon1 = fibon2;
		fibon2 = sum;
		if (i == 49)
			printf("\n");
		else
		{
			printf(",");
			printf(" ");
		}
	}
	return (0);
}
