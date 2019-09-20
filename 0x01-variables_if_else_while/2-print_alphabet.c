#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
