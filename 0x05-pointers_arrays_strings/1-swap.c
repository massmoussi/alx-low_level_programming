#include "main.h"

/**
 * swap_int - Function Declaration
 *
 * Description: swap values of a & b
 *
 * @a: 1er integer
 *
 * @b: 2 second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
