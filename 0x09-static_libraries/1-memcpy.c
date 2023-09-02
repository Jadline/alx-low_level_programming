#include "main.h"
/**
 * _memcpy -  copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n : number of bytes to be copied
 *
 * Return: returns the pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int p = n;

	for (; k < p; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
