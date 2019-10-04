#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s: input string
 * Return: 1337 string
 */

char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char _switch;

	for (i = 0; s[i] != '\0'; i++)
	{
		_switch = 0;
		for (j = 0; a[j] != '\0' && _switch == 0; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				_switch = 1;
			}
		}
	}

	return (s);
}
