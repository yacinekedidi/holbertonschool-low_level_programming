#include "hash_tables.h"

/**
 * hash_table_create - check the code for Holberton School students.
 * @size: tablesize
 * Return: Always EXIT_SUCCESS.
 */

hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *ht = NULL;
unsigned int i = 0;

if (!size)
	return (NULL);

ht = malloc(sizeof(hash_table_t));
if (!ht)
	return (NULL);

ht->array = malloc(sizeof(hash_node_t *) * size);

if (!ht->array)
	return (NULL);

ht->size = size;


while (i < size)
	ht->array[i++] = NULL;


return (ht);
}
