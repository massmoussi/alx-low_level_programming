#include "hash_tables.h"

/**
 * hash_djb2 - hash func implement djb2
 * @str: str to hash
 * Return: the hash calcul
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
