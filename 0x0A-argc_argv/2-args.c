#include <stdio.h>
/**
 * main - The entry point of the program
 * @argc : number of command line arguments
 * @argv : an array of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <  argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
