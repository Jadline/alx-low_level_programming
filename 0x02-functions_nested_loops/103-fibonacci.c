#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alwaays 0 (Success)
 */
int main(void)
{
	int k;
	unsigned long fibon1 = 0, fibon2 = 1, sum;

	for (k = 0; k < 10; k++)
	{
		sum = fibon1 + fibon2;
		printf("%lu", sum);

		fibon1 = fibon2;
		fibon2 = sum;

		if (k == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
