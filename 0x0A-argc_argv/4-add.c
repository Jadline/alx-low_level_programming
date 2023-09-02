#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _isint- tests if command line argument is a digit
 * @iptr: integer argument size of character array
 * @cptr: pointer to character pointer
 * Return: true on success, false on failure
 */
int _isint(int iptr, char **cptr)
{
	int k = 1, m;

	for (; k < (iptr - 1); k++)
	{
		for (m = 0; *cptr[k] != '\0' &&  m < (int) strlen(cptr[k]); m++)
		{
			if (isdigit(cptr[k][m]) == 0)
				return (1);
		}
	}
	return (0);
}
/**
 * main - Prints the sum of args positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 1, sum = 0;

	if (_isint(argc, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (; count < argc; count++)
		sum += atoi(argv[count]);
	printf("%d\n", sum);
	return (0);
}
