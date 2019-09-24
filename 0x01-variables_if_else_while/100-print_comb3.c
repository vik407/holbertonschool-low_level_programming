#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99.
 * Return: 0
 */

int main(void)
{
	int a, j, k;

	a = 0;

	while (a < 100)
	{
		j = a % 10;
		k = a / 10;

		if (k < j)
		{
			putchar(j + '0');
			putchar(k + '0');

			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}

		}
		a++;
	}
	putchar('\n');
	return (0);
}
