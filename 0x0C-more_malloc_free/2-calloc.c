#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: Pointer to the allocated and initialized memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		memset(p, 0, nmemb * size);
	}

	return (p);
}

