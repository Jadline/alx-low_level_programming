#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *my_file;
	char *my_chars;
	ssize_t num_of_chars;
	ssize_t final_chars;

	if (filename == NULL)
	{
		return (0);
	}
	my_file = fopen(filename, "r");
	if (my_file == NULL)
	{
		return (0);
	}
	my_chars = (char *)malloc(letters);
	if (my_chars == NULL)
	{
		fclose(my_file);
		return (0);
	}
	num_of_chars  = fread(my_chars, 1, letters, my_file);
	if (num_of_chars <= 0)
	{
		fclose(my_file);
		free(my_chars);
		return (0);
	}
	final_chars = write(STDOUT_FILENO,my_chars,num_of_chars);
	if (final_chars <= 0 || (ssize_t)final_chars != num_of_chars)
	{
		fclose(my_file);
		free(my_chars);
		return (0);
	}

	fclose(my_file);
	free(my_chars);
	return (num_of_chars);
}
	

		

