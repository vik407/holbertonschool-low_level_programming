#include "holberton.h"
/**
 * _isalpha - Entry point to receive chars
 * @c: Receive the character
 *
 * Description: Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Return: 0
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
