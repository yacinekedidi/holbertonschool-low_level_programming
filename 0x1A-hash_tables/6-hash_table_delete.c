#include "hash_tables.h"

/**
 * hash_table_delete - check the code for Holberton School students.
 * @ht: hashtable
 * Return: Always EXIT_SUCCESS.
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *tmp = NULL, *h = NULL;
unsigned long int i = 0;

if (!ht)
return;

for (; i < ht->size ; i++)
{
	h = ht->array[i];
	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
free(ht->array);
free(ht);
return;
}
