#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: character string to be checked
 * @accept: character string to be checked
 *
 *Return: returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
