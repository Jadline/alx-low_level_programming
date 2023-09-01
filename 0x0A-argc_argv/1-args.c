#include <stdio.h>
/**
 * main - entry point of the program
 * @argc : number of command line arguments
 * @argv : an array of command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
