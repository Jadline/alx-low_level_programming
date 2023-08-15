#include "main.h"
/**
 * _islower - This function checks for lowercase letters
 *
 * @c - Variable name
 *Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
