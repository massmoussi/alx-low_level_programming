#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all except 'q' and 'e' using a for loop and if statement
 *
 * Return: Always returns 0 to indicate success
 */
int main(void)
{
	int i;

	/* Print all alphabets except 'q' and 'e' */
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}

