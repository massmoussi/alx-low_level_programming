#include "main.h"
/**
 * main - Entry Point
 *
 * Description: Print array of charachters using putchar and Loop
 *
 * Return: 0 Always massmoussi
 */

int main(void)
{
	int i;
	char text[] = "_putchar";

	for (i = 0; i < 8; i++)
	_putchar(text[i]);
	_putchar('\n');

	return (0);
}
