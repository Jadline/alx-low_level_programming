#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @c: character to be checked
 * @s: pointer to the string
 *
 * Return: returns a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
