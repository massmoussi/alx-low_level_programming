#include "lists.h"

/**
 * add_dnodeint - funct add node to Doubly linked list
 *
 * @head: pntr to pntr to head of the list
 *
 * @n: integer to add in node
 *
 * Return: if fail 0, or N head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (0);
	if (*head != NULL)
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	else
	{
		newnode->next = NULL;
	}
	newnode->n = n;
	newnode->prev = NULL;
	*head = newnode;

	return (*head);
}
