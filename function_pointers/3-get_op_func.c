#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	if (s == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
	{
		printf("Error\n");
		exit(99);
		return (NULL);
	}
}
