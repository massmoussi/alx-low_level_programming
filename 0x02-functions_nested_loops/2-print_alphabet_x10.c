#include "main.h"
/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 *
 * Description: print all the alphabet in  lowercase  10 times using newline
 *
 * Return: Always massmoussi success
 */

void print_alphabet_x10(void)
{
int lin, alph;
for (lin = 0; lin <= 9; lin++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
