#include "holberton.h"
int _compare(char *s, int len, int i);

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: Character
 * Return: An empty string is a palindrome.
**/

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length == 0)
		return (1);
	length--;
	return (_compare(s, length, 0));
}

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: String
 * Return: the lenght of a string
**/

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}

/**
 *_compare - a function to check if index equals end
 *@s: string pointer
 *@len: length
 *@i: beginning of string
 *
 *Return: comparison
 */
int _compare(char *s, int len, int i)
{
	if (s[i] != s[len])
		return (0);
	else if (i > len)
		return (1);
	return (_compare(s, len - 1, i + 1));
}
