#include "lists.h"

/**
 * insert_dnodeint_at_index - Func insert node at certain pos
 *
 * @h: pointer to pntr tofirst node of the liked list
 *
 * @idx: posit of certain node
 *
 * @n: int data to add in node
 *
 * Return: New nodes addrs
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	temp = *h;

	if (idx == 0)
	{
		newnode->next = *h;
		if (h != NULL)
		{
			(*h)->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
		for (i = 0; i < idx && temp != NULL ; i++)
		{
			if (i == idx - 1)
			{
				newnode->next = temp->next;
				newnode->prev = temp;
				temp->next->prev = newnode;
				temp->next = newnode;
				return (newnode);
			}
			else
				temp = temp->next;
		}

	return (NULL);

}
