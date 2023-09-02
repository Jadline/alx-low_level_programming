#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte
 * @n: number of bytes to fill the memory area
 *
 * Return:returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
