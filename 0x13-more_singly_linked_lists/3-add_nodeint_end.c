#include "lists.h"

/**
 * add_nodeint - funct return modes number
 *
 * @h: ptr t H of the list
 *
 * Return: Nodes N
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *temp;

	temp = *head;

	NewNode = malloc(sizeof(listint_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (temp == NULL)
		*head = NewNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = NewNode;
	}


	return (*head);

}
