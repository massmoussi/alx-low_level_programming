#include "variadic_functions.h"
/**
 * main - entry var function
 *
 * Discr: variadec param fun that print all param
 *
 * return: 0 lik always
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numb;

	unsigned int i;
	int sum = 0;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numb, int);
	}

	va_end(numb);

	return (sum);
}

