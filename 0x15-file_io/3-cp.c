#include "holberton.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: A content to one file to other file
 */
int main(int argc, char **argv)
{
	int _file_source, _file_target;
	ssize_t file_source, file_target;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	_file_source = open(argv[1], O_RDONLY);
	if (_file_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	_file_target = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (_file_target == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	/* Loop to the content of file 1 till the end and write to the file 2 */
	while (file_source)
	{
		file_source = read(_file_source, buffer, BUFFER_SIZE);
		if (file_source == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
		if (file_source > 0)
		{
			file_target = write(_file_target, buffer, file_source);
			if (file_target == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
		}
	}
	file_target = close(_file_source);
	if (file_target == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file_source),
		exit(100);
	file_target = close(_file_target);
	if (file_target == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _file_target),
		exit(100);
	return (0);
}
