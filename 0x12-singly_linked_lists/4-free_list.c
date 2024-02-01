#include "lists.h"

/**
 * free_list - free singl linked list
 *
 * @head: ptr t the first node
 *
 * Return: Its void
 */

void free_list(list_t *head)
{
	list_t *node;

	node = head;


	while (node != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
