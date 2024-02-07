#include "lists.h"

/**
 * free_listint - free int linked list
 *
 * @head: ptr t the F node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}

}
