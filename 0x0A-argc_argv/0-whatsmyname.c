#include <stdio.h>
/**
 * main - The entry point
 * @argc: number of command line arguments
 * @argv : an array of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
