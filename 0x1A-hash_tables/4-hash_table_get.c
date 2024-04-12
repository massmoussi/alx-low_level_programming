#include "hash_tables.h"

/**
 * hash_table_get - Func to get value of k
 * @ht: hashtabl
 * @key: str to hash
 * Return: value of the k or NULL if k not in the tabl
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, hash;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	hash = key_index((const unsigned char *)key, ht->size);
	index = hash % ht->size;

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
