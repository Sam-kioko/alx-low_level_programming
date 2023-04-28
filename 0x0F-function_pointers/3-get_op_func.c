#include "3-calc.h"
#include <stddef.h>

/**
 * ge_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as an argument to the program
 *
 * Return: pointer to the function that corresponds to
 * the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t opt_ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (opt_ops[i].op != NULL)
	{
		if (*(opt_ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (opt_ops[i].f);
		}

		i++;
	}

	return (NULL);
}
