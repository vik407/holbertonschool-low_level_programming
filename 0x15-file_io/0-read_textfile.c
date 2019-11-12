#include "holberton.h"

/**
 *read_textfile - unction that reads a text file and prints it to the POSIX
 * standard output.
 *@filename: filename
 *@letters: number of letters in file
 *
 *Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open, file_read, file_write;
	char *buffer;

	if (filename)
	{
		/* Open File */
		file_open = open(filename, O_RDWR);

		if (file_open == -1)
		{
			return (0);
		}
		/* memory space alloc */
		buffer = malloc(sizeof(char) * letters);

		if (buffer == NULL)
		{
			return (0);
		}

		file_read = read(file_open, buffer, letters);
		if (file_read == -1)
		{
			free(buffer);
			return (0);
		}
		close(file_open);

		file_write = write(STDOUT_FILENO, buffer, file_read);

		if (file_read != file_write)
		{
			return (0);
		}
		free(buffer);

		return (file_write);
	}
	return (0);
}
