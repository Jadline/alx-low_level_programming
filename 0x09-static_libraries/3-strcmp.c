#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to string one
 * @s2: Pointer to string two
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int k;
	int p = 0;

	for (k = 0; s1[k] != '\0' && p == 0; k++)
	{
		p = s1[k] - s2[k];
	}
	return (p);
}
