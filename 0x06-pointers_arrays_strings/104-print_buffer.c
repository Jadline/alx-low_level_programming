#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer to a string character
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int k, m, z;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		m = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (z = 0; z < 10; z++)
		{
			if (z < m)
				printf("%02x", *(b + k + z));
			else
				printf(" ");
			if (z % 2)
			{
				printf(" ");
			}
		}
		for (z = 0; z < m; z++)
		{
			int c = *(b + k + z);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}
