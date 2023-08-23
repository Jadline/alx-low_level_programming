#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: pointer to source string
 *
 * Return: the destination string
 */
char *_strcat(char *dest, char *src)
{
	int length1;
	int length2;
	int k;

	for (length1 = 0; dest[length1] != '\0'; length1++)
	{

	}
	for (length2 = 0; src[length2] != '\0'; length2++)
	{

	}
	for (k = 0; k <= length2; k++)
	{
		dest[length1 + 1] = src[k];
	}
	return (dest);
}
