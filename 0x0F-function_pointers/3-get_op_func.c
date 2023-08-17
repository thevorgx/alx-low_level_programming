#include "3-calc.h"
/**
 * get_op_func - Selects the correct function to perform an operation.
 * @s: The operator string.
 *
 * Return: A pointer to the corresponding function.
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

	for (i = 0; i < 5; i++)
	{
	if (*s == *ops[i].op)
	return (ops[i].f);
	}
	return (NULL);
}
