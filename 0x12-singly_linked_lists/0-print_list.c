#include "lists.h"

/**
 * print_list - funct t print all node within a singl linked list
 *
 * @h: pointer t a strucct
 *
 * Return: number f nods
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
