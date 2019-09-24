#include "holberton.h"
/**
 * main - Entry point function
 *
 * Description: followed by a new line.
 * Return: 0
 */
int main(void)
{
	char H[] = "Holberton";
	int s = sizeof(H);
	int i = 0;

	while (i < s)
	{
		_putchar(H[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
