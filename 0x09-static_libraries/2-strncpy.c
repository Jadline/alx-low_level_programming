#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: is the number of strings to copy
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0' &&  k < n; k++)
	{
		dest[k] = src[k];
	}
	for (k = k; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
