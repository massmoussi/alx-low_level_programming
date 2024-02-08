#include "main.h"

/**
 * binary_to_uint - funct t convert binary strg to decimal
 *
 * @b: ptr to string
 *
 * Return: 0 in case h failed, or int value
 */

unsigned int binary_to_uint(const char *b)
{
	int i, num;
	int base = 2;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num = 0;
		else if (b[i] == '1')
			num = 1;
		else
			return (0);

		total = total * base + num;
	}

	return (total);
}
