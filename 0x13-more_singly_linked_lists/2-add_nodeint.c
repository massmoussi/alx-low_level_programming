#include "lists.h"

/**
 * add_nodeint - funct return modes number
 *
 * @h: ptr t first of the list
 *
 * Return: adress
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	if (*head == NULL)
		NewNode->next = NULL;
	else
		NewNode->next = *head;

	NewNode->n = n;
	*head = NewNode;

	return (*head);
}
