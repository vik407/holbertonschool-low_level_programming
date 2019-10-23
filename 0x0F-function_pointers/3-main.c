#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: Number or arguments
 * @argv: Values of the arguments
 *
 * Return: an integer if success, if not exits with code 98
 */
int main(int argc, char *argv[])
{
	/* the numbers for the operations and the result and the func*/
	int int_a, int_b, result;
	int (*p)(int, int);

	/* ask for 4 arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Detect if the operators are comming in the arguments */
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* Do the operations */
	int_a = atoi(argv[1]);
	int_b = atoi(argv[3]);
	result = (*get_op_func(argv[2]))(int_a, int_b);

	printf("%d\n", result);

	return (0);

}
