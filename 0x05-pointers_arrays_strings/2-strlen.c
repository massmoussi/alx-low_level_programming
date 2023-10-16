#include "main.h"

/**
 * _strlen - Function Declaration
 *
 * Description: Print length of a string
 *
 * @s: string
 *
 * Return: The total length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
