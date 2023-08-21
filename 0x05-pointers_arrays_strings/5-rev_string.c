#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
	char ch = s[0];
	int length = 0;
	int k;

	while (s[length] != '\0')
	{
		length++;
	}
	for (k = 0; k < length; k++)
	{
		length--;
		ch = s[k];
		s[k] = s[length];
		s[length] = ch;
	}
}
