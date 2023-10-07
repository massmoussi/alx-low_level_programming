#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase and uppercase alphabets using for loops
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	/* Print lowercase alphabets */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* Print uppercase alphabets */
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

