#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99.
 * Return: 0
 */

int main(void)
{
	int a, j, k;

	for (a = 0; a < 100; a++)
	{
		j = a / 10;
		k = a % 10;

		putchar(j + '0');
		putchar(j + '0');

		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
