#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - unction that concatenates all the arguments of your program.
 *
 * @ac: Argument
 * @av: Argument
 *
 * Return: pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */

char *argstostr(int ac, char **av)
{
	char *res;
	int str = 0;
	int i, j;
	int k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			str++;
		str++;
		i++;
	}
	str++;

	res = malloc(str * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			res[k] = av[i][j];
			k++;
		}
		res[k] = '\n';
		k++;
	}

	res[k] = '\0';

	return (res);
}
