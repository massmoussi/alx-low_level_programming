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
