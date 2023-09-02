#include "main.h"
/**
 * _isupper - A program to check uppercase letters
 * @c: variable to be checked
 *
 * Return: 1 if the letter is uppercasse
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
