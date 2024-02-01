#include "lists.h"

/**
 * add_node_end - funct to add node at end of linked list
 *
 * @head: ptr to ptr point t First node or empty
 *
 * @str: ptr t strg
 *
 * Return: N list head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t l_str;
	list_t *N_node, *temp;

	if (str == NULL)
		l_str = 0;

	l_str = strlen(str);

	N_node = malloc(sizeof(list_t));
	if (N_node == NULL)
		return (NULL);

	N_node->str = strdup(str);
	N_node->next = NULL;
	N_node->len = l_str;

	temp = *head;

	if (temp == NULL)
		*head = N_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = N_node;
	}
			return (*head);
}
