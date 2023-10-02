#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - a function that creates a file
 *
 * @filename:filename to create
 * @text_content:content to write
 * Return: returns 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int my_file;
	ssize_t num_of_chars;

	if (filename == NULL)
		return (-1);
	my_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (my_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		num_of_chars = write(my_file, text_content, strlen(text_content));
		if (num_of_chars == -1)
		{
			close(my_file);
			return (-1);
		}
	}
	close(my_file);
	return (1);
}

