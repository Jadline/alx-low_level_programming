#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Check if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * multiply - Multiply two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication.
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	return (num1 * num2);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(atoi(argv[1]), atoi(argv[2]));
	printf("%u\n", result);
	return (0);
}

