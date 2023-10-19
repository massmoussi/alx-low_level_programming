#include "main.h"

/**
 * _strcmp - function name
 *
 * Description: Function compare two string
 *
 * @s1: pointer to string 1
 *
 * @s2: pointer to string 2
 *
 * Return: comparaison results
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
