#include <stdio.h>

/**
 * print_listint - func t print an int S L list
 *
 * @h: ptr t the H of the list
 *
 * Return: Nodes N
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next
	}

	return (count);
}
