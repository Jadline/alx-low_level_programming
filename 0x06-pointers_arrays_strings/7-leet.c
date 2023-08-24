#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 * @str: pointer to a string
 * Return: returns a string
 */
char *leet(char *str)
{
	int k, m;

	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (m = 0; c[m] != '\0'; m++)
		{
			if (str[k] == c[m])
			{
				str[k] = d[m];
			}
		}
	}
	return (str);
}
