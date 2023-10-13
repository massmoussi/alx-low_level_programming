#include "main.h"

/**
 * Print diagonal - Function name
 *
 * Description: print diagonal based on n
 *
 * @n: number based on
 *
 * Return: Nada it's void again
 */

void print_diagonal(int n)
{
	int i;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (j < n)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}

}
