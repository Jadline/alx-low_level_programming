#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Computes sum of multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 0;
	int z;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 3 == 0) || (z % 5 == 0))
			p += z;
	}
	printf("%d\n", p);
	return (0);
}
