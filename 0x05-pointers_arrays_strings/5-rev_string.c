#include "holberton.h"
#include <stdio.h>
int sizeit(char *a);

/**
 * rev_string - reverses a string
 *
 * @s: The String to reverse
 * Return: reversed string
 */

void rev_string(char *s)
{
	int length = sizeit(s);
	char string[500];
	int str_point, end_point, tmp_arr;

	str_point = 0;
	tmp_arr = 0;
	end_point = length - 1;
	for (end_point = end_point; end_point >= str_point; end_point--)
	{
		string[tmp_arr] = s[end_point];
		tmp_arr++;
	}

	for (end_point = 0; end_point < length; end_point++)
	{
		s[end_point] = string[end_point];
	}
}

/**
 * sizeit - count the lenght of a string pointer
 *
 * @a: the string to pass
 * Return: integer
 */

int sizeit(char *a)
{
	int length = 0;

	while (*(a + length) != '\0')
	{
		length++;
	}
	return (length);
}
