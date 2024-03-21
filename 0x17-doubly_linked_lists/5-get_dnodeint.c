#include "lists.h"

/**
 * get_dnodeint_at_index - funct to Get node value of certain idx
 *
 * @head: pntr to first node
 *
 * @index: index of the node
 *
 * Return: the data in the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return (head);
}
