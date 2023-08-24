#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: pointer to a string
 *
 * Return: returns a string
 */
char *rot13(char *str)
{
	int k, m;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (m = 0; c[m] != '\0'; m++)
		{
			if (str[k] == c[m])
			{
				str[k] = d[m];
				break;
			}
		}
	}
	return (str);
}
