#include "lists.h"

/**
 * listint_len - funct return modes number
 *
 * @h: ptr t H of the list
 *
 * Return: Nodes N
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
