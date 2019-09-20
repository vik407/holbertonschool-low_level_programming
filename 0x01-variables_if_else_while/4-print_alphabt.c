#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (i < 24)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
