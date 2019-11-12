#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int file_open, file_write, i;

	if (!filename)
	{
		return (-1);
	}

	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_open == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
		{
			i++;
		}

		file_write = write(file_open, text_content, i);
		if (file_write == -1)
		{
			return (-1);
		}
	}
	close(file_open);
	return (1);
}
