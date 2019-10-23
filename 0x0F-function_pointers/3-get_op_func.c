#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func -  function that searches for an integer.
 * @s: is the operator passed as argument to the program
 *
 * Return: This function returns a pointer to the function that corresponds
 * to the operator given as a parameter. Example: get_op_func("+") should
 * return a pointer to the function op_add
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}
		i++;
	}

	return (ops[i].f);
}
