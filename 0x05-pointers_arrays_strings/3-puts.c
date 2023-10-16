#include "main.h"

/**
 * _puts - function declaration
 *
 * Description: Function print a string
 *
 * @str: String gonna be print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
