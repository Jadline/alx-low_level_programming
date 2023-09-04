#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0;
	int len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i] != '\0')
				 i++;
		}
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
			i++;
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
			len++;
		words[k] = (char *)malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < len; j++, i++)
			words[k][j] = str[i];
		words[k][j] = '\0';
	}
	words[word_count] = NULL;
	return (words);
}
