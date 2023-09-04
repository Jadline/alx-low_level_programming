#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated spac
 * @str: pointer to a string
 *
 * Return: returns a pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	dup = (char *)malloc((size + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	dup[size] = '\0';
	return (dup);
}
