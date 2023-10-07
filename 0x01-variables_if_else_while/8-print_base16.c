#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 (0-9, a-f)
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	/* Print numbers 0-9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/* Print lowercase alphabets a-f */
	for (i = 0; i <= 5; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}

