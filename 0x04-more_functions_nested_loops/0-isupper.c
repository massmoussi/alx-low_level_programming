#include "main.h"

/**
 * _isupper - function name
 *
 * Description: function check if c in Uppercase
 *
 * @c: character to check
 *
 * Return: so 1 if it uppercase , 0 if not 
 */

int _isupper(int c)
{
	if (c >= 48 &&  c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
