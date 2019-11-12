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
	char ch;
	int *_source, *_target;
	FILE *source, *target;

	/* Limited arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_source = argv[1];
	_target = argv[2];

	source = open(_source, O_RDONLY);
 
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
 
	/* File 2 to copy, truncate if exists */
	target = open(_target, O_WRONLY | O_CREAT | O_TRUNC);
 
	/* if File 2 drops an error */
	if (target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while( ( ch = fgetc(source) ) != EOF )
		fputc(ch, target);

	fclose(source);
	fclose(target);

	return 0;
}
