#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * binary_to_uint - this function returns the decimal representation
 * @b : a pointer to the firts character in the string
 *
 * Return:returns the decimal representation
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, sum, result, num;

	sum = 0;
	if (b == NULL)
	{
		return (0);
	}
	length = strlen(b);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			num = *b - '0';
			result = num * pow(2, length - 1);
			sum += result;
		}
		b++;
		length--;
	}
	return (sum);
}
