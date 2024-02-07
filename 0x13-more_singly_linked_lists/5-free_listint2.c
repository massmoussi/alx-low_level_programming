#include "lists.h"

/**
 * free_listint2 - free integer linked list
 *
 * @head: ptr to ptr to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
