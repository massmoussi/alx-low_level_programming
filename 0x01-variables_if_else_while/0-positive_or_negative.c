#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -Entry point of the program
 *
 * Description: This program identifies whether if positive, negative or zero.
 *
 * Return: 0 Always return 0 to indicate success.
 *
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);

	}

	return (0);
}
