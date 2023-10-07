#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints digits with some spacer between them
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	/* Print digits with spacer */
	for (i = 0; i < 10; i++)
	{
		if (i != 0)
		{
			putchar(44); /* ASCII code for comma */
			putchar(32); /* ASCII code for space */
		}
		putchar(i + '0'); /* Print digit */
	}

	putchar('\n');

	return (0);
}

