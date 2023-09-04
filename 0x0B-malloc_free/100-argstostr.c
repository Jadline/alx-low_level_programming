#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing concatenated arguments,
 *         separated by newline characters, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;

	int i, j, total_length = 0;
	int position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[position++] = av[i][j];
		}
		concatenated[position++] = '\n';
	}
	concatenated[position] = '\0';
	return (concatenated);
}
