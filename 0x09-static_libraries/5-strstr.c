#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 *
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		k = 0;

		if (haystack[k] == needle[k])
		{
			do {
				if (needle[k + 1] == '\0')
					return (haystack);
				k++;
			} while (haystack[k] == needle[k]);
		}
		haystack++;
	}
	return ('\0');
}
