#include "main.h"

/**
 * wildcmp - compares two strings and handles special character *
 * @s1: first string
 * @s2: second string with special character *
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (*s1 == *s2);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
