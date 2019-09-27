#include <stdio.h>
/**
 * main - entry point.
 * Return: 0 if successful.
 */
int main(void)
{
	unsigned long a;
	unsigned long b;

	b = 612852475143;

	for (a = 3; a < b; a++)
	{
		if (b % a == 0)
			b /= a;
	}
	printf("%lu\n", b);

	return (0);
}
