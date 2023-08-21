#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: Pointer to the string to be converted
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > (INT_MAX % 10)))
		{
			if (sign == 1)
			return (INT_MAX);
		else
			return (INT_MIN);
		}
	result = result * 10 + digit;
	s++;
	}
	return (result * sign);
}

