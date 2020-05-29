#include "hash_tables.h"


/**
 * hash_table_set - check the code for Holberton School students.
 * @ht : hashtable
 * @key: key
 * @value: value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *h = NULL;
	char *val = NULL;
	unsigned long int i;

	if (!ht || !key || !value)
		return (0);

	val = strdup(value);

	i = key_index((const unsigned char *)key, ht->size);
	h = ht->array[i];

	while (h)
	{
		if (strcmp(h->key, key) == 0)
		{
			free(h->value);
			h->value = val;
			return (1);
		}
	h = h->next;
	}


	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = val;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);

}
