#include "variadic_function.h"

/**
 * print_numbers : Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 *
 * @n: The number of integers passed to the function.
 *
 * @...: The integers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list numb;

	unsigned int i;
	int num;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(numb, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);

	}
	printf("\n");

	va_end(numb);
}
