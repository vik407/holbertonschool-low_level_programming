#include"3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum integers
 * @a: integer
 * @b: integer
 *
 * Return: an integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: integer
 * @b: integer
 *
 * Return: an integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - times
 * @a: integer
 * @b: integer
 *
 * Return: an integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divission
 * @a: integer
 * @b: integer
 *
 * Return: an integer
 */

int op_div(int a, int b)
{
	/* Detect if b equals 0 ;-) */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - remainers
 * @a: integer
 * @b: integer
 *
 * Return: an integer
 */

int op_mod(int a, int b)
{
	/* Detect if b equals 0 ;-) */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
