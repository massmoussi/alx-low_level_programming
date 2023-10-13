#include "main.h"

/**
 * print_line - function name
 *
 * Description: Print Underscore N times
 *
 * @n: number of times
 *
 * Return: nada it's void again
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
