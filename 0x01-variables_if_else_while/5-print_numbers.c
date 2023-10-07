#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints digits from 0 to 9 using putchar
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	/* Print digits from 0 to 9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

