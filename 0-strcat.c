#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * This function concatenates the string pointed to by src to the end of the
 * string pointed to by dest.
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the concatenated string (dest)
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	for (l = 0; dest[l] != '\0'; l++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';

	return (dest);
}
