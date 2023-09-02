#include "main.h"
/**
 * *_strcpy - copies a string including the null byte
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}

