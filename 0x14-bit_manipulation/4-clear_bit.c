#include "main.h"

/**
 * clear_bit - func clear value of a bit based
 *
 * @n: pntr to int
 *
 * @index: bit index
 *
 * Return: -1 if fail, otherwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
