#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet using ASCII values and a for loop
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

