#include "lists.h"

/**
 * list_len - funct t count the number of nods within a singl linked list
 *
 * @h: pointers toa struct
 *
 * Return: numbers f node
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			exit(0);
		else
		h = h->next;
		count++;
	}
	return (count);
}
