#include "main.h"

/**
 * _strdup - function name
 *
 * Description: Function mesure a variable & duplicate it it
 *
 * @str: string
 *
 * Return: Null iF There is issue, Otherwise The New String
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *string;

	if (!str)
	{
		return (NULL);
	}

	j = strlen(str);

	string = malloc((j + 1) * sizeof(char));

	if (!string)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		string[i] = str[i];
	}
	string[i] = '\0';

	return (string);
}