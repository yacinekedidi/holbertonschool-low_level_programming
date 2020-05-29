#include "hash_tables.h"

/**
 * hash_table_print - check the code for Holberton School students.
 * @ht: hashtable
 * Return: Always EXIT_SUCCESS.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (!ht)
		return;


	printf("{");
	for (; i < ht->size ; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (i != (ht->size) - 1 && !tmp)
					printf("'%s': '%s',", tmp->key, tmp->value);
				else
					printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");


	return;


}
