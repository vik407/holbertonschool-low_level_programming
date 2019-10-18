#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: String one
 * @s2: String two
 * @n: N bytes of string 2 terminated in null
 *
 * Return: Returns a pointer to the allocated memory
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* The concatenated response and the indexes */
	char *res;
	unsigned int i, j, l_i, l_j;

	s1 = (s1 == NULL) ? "" : s1;/* Validate */
	s2 = (s2 == NULL) ? "" : s2;/* Validate */

	while (s1[l_i] != '\0')
		l_i++;

	while (s2[l_j] != '\0')
		l_j++;

	if (n > l_j)
		n = l_j;

	res = malloc((l_i + (n + 1)) * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < l_i; i++)
		res[i] = s1[i];

	for (l_j = 0; j < n; j++)
	{
		res[i] = s2[j];
		i++;
	}

	res[i] = '\0';

	return (res);
}
