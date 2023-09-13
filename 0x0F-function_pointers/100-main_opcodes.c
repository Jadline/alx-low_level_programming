#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 for incorrect argument count, 2 for negative bytes
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
