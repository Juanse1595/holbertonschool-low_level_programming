#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - gets the address of the op func
 * @s: given operator
 * Return: address of the op function
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

	if (s == NULL)
		return (NULL);
	i = 0;
	while (*ops[i].op != *s)
		i++;
	return (ops[i].f);
}
