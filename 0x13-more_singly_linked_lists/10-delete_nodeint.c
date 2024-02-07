#include "lists.h"

/**
 * delete_nodeint_at_index - delete node of certain position
 *
 * @head: pointer to pointer to First node
 *
 * @index: index of a node
 *
 * Return: -1 if fail, 1 Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}
