#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: Pointer to the string character
 *
 * Return: a string
 */
char *cap_string(char *str)
{
	int k;
	int m;

	char z[] = {',', ';', '.', '!', '?', '"', '(', ')', '\t', '\n', ',', '{', '}'};

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k == 0 && str[k] >= 'a' && str[k] <= 'z')
		{
			str[k] = str[k] - 32;
		}
	}
	for (m = 0; z[m] != '\0'; m++)
	{
		if (z[m] == str[k] && (str[k + 1] >= 'a' && str[k + 1] <= 'z'))
		{
			str[k + 1] = str[k + 1] - 32;
		}
	}
	return (str);
}
