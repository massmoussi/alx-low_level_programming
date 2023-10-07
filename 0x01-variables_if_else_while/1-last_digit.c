#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - The main function serves as the entry point of the program.
 *
 * This program generates a random number and checks its last digit.
 *
 * Return: The function returns 0 to indicate successful execution.
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;

	if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);

}

