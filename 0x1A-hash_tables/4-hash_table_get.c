#include "hash_tables.h"

/**
 * hash_table_get - check the code for Holberton School students.
 * @ht : hashtable
 * @key: key
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int i;
	hash_node_t *h = NULL;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	h = ht->array[i];
	while (h)
	{
		if (strcmp(h->key, key) == 0)
			return (h->value);

		h = h->next;
	}

	return (NULL);
}
