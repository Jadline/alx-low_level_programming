#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness of the system
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int my_number;
	char *b;

	my_number = 1;
	b = (char *)&my_number;
	return (b[0] != 0);
}
