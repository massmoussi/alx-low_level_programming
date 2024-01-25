#include <stdio.h>
#include <stdarg.h>
#include <variadic_functions.h>
/**
 * main - entry var function
 *
 * Discr: variadec param fun that print all param
 *
 * return: 0 lik always
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int sum = 0;
	var_list args;

	var_start(args, n);

	for (int i = 0; i < n; i++)
	{
	sum += var_arg(args, int);
	}
	var_end(args);
	return (sum);
}

