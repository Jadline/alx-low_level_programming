#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *my_chars;

	my_chars  = malloc(sizeof(char) * 1024);

	if (my_chars == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (my_chars);
}

/**
 * file_closing - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void file_closing(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int my_file_from, my_file_to, k, n;
	char *my_chars;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	my_chars = create_buffer(argv[2]);
	my_file_from = open(argv[1], O_RDONLY);
	k = read(my_file_from, my_chars, 1024);
	my_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (my_file_from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(my_chars);
			exit(98);
		}

		n = write(my_file_to, my_chars, k);
		if (my_file_to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(my_chars);
			exit(99);
		}

		k = read(my_file_from, my_chars, 1024);
		my_file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(my_chars);
	close_file(my_file_from);
	close_file(my_file_to);

	return (0);
}
