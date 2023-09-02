#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: number of bytes
 *
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_dest;
	int k;

	for (length_dest = 0; dest[length_dest] != '\0'; length_dest++)
	{

	}
	for (k = 0; src[k] != 0 && k < n; k++)
	{
		dest[length_dest + k] = src[k];
	}
	return (dest);
}
