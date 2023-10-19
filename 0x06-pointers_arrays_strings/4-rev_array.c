#include "main.h"
/**
 * reverse_array - function ==> reverse array
 *
 * @a: array input
 *
 * @n: pointer ==> sizeof
 *
 * Return: void ==> nothing
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
