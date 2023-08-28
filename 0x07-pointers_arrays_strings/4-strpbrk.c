#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to a character string
 *
 * Return: returns a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
		}
	s++;
	}
	return ('\0');
}
