#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for keygen
 *
 * Return: 0
*/

int main(void)
{
	int c, sum, last;

	srand(time(NULL));
	for (sum = 0, last = 2772; last > 122; sum ++)
	{
		c = (rand() % 128) + 1;
		printf("%c", c);
		last -= c;
	}
	printf("%c", last);

	return (0);
}
