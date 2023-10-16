#include "main.h"

/**
 * Print_rev - Function Declaration
 *
 * Description: function print in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
