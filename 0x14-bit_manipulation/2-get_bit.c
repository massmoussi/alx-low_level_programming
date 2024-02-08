#include "main.h"

/**
 * get_bit - func extract bit
 *
 * @n: decimal numb
 *
 * @index: bit index
 *
 * Return: -1 if fail, otherwise bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 32)
		return (-1);

	bits = (n >> index) & 1;

	return (bits);
}
