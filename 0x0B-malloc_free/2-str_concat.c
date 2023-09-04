#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings.
 * @s1 : first string
 * @s2 : second string
 *
 * Return: returns a character pointer
 */
char *str_concat(char *s1, char *s2)
{
	int str1_len, str2_len, total_len;
	char *result;
	int i, j;

	str1_len = 0;
	str2_len = 0;

	while (s1[str1_len] != '\0')
		str1_len++;
	while (s2[str2_len] != '\0')
		str2_len++;
	total_len = str1_len + str2_len;
	result = (char *)malloc((total_len + 1) * sizeof(char));
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (result == NULL)
		return (NULL);
	for (i = 0; i < str1_len; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < str2_len; j++)
	{
		result[j] = s2[j];
	}
	result[total_len] = '\0';

	return (result);
}
