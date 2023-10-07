#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabets in reverse order using a for loop
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	/* Print the alphabets in reverse order */
	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}

