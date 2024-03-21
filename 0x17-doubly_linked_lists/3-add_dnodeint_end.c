#include "lists.h"

/**
 * add_dnodeint_end - add node at end of Doubly linked list
 *
 * @head: pntr to pntr the head of the list
 *
 * @n: int to add as node
 *
 * Return: NULL if it fail sinon, Nw list with node added
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (*head);
}
