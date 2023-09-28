#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int my_result, p;

	my_result =  n ^ m;
	p = 0;
	while (my_result)
	{
		p += my_result & 1;
		my_result >>= 1;
	}
	return (p);
}
