#include "hash_tables.h"


/**
 * free_node - func to free one node
 * @node: node contain key/value pairs
 * This is Helper func make the Code more
 * readable
 */

void free_node(hash_node_t *node)
{
	if (node == NULL)
		return;

	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - function to free hashtable
 * @ht: hashtable to free
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
		next = temp->next;
		free_node(temp);
		temp = next;
		}

	}
	free(ht->array);
	free(ht);
}
