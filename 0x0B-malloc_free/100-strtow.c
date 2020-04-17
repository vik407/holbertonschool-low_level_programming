#include <stdlib.h>
#include <stdio.h>

/**
 * count_height - count height of the string matrix
 * @str: input string
 * Return: interger
 */
int count_height(char *str)
{
	int c_y = 0, c_x = 0, count = 0;

	while (str[count] != '\0')
	{
		if (str[count] == ' ')
		{
			if (c_x > 0)
				c_y++;
			c_x = 0;
		}
		else
		{
			c_x++;
		}
		count++;
	}
	if (c_x > 0)
		c_y++;
	return (c_y);
}
/**
 * check_last - check for the last space needed to be allocated
 * @s: input of arguments
 * @c_x: input int size of row
 * @c: input int count of row
 * Return: pointer to pointer
 */
char **check_last(char **s, int c_x, int c)
{
	if (c_x > 0)
	{
		c_x++;
		s[c] = malloc(sizeof(char) * c_x);
		if (s[c] == NULL)
		{
			while (c >= 0)
			{
				free(s[c]);
				c--;
			}
			free(s);
			return (NULL);
		}
		c++;
	}
	return (s);

}
/**
 * assign - assign the values
 * @str: count arguments
 * @s: input of arguments
 * Return: pointer to pointer
 */
char **assign(char *str, char **s)
{
	int counter = 0, c1 = 0, c2 = 0;

	while (str[counter] != '\0')
	{
		if (str[counter] == ' ')
		{
			if (c2 > 0)
				c1++;
			c2 = 0;
		}
		else
		{
			s[c1][c2] = str[counter];
			c2++;
		}
		counter++;
	}
	return (s);
}
/**
 * strtow - store string in matrix
 * @str: input string
 * Return: matrix or null
 */
char **strtow(char *str)
{
	char **s;
	int c_y, c_x = 0, c = 0, count = 0;

	if (str == NULL)
		return (NULL);
	c_y = count_height(str) + 1;
	if (c_y == 1)
		return (NULL);
	s = malloc(sizeof(char *) * c_y);
	while (str[count] != '\0')
	{
		if (str[count] == ' ')
		{
			if (c_x > 0)
			{
				c_x++;
				s[c] = malloc(sizeof(char) * c_x);
				if (s[c] == NULL)
				{
					while (c >= 0)
					{
						free(s[c]);
						c--;
					}
					free(s);
					return (NULL);
				}
				c++;
			}
			c_x = 0;
		}
		else
			c_x++;
		count++;
	}
	s = check_last(s, c_x, c);
	return (assign(str, s));
}
