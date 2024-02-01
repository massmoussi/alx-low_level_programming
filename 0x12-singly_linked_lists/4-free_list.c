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
	node = head;
	
	list_t *node;


	while (node != NULL)
		{
		head = head->next;
		free(node->str);
		node = head;
		free(node);
	}
}
