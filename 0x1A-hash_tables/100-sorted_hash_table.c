#include "hash_tables.h"


/**
 * shash_table_create - check the code for Holberton School students.
 * @size: size
 * Return: Always EXIT_SUCCESS.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t  *ht = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = size;

	for (; i < ht->size ; i++)
		ht->array[i] = NULL;

	return (ht);
}


/**
 * shash_table_set - check the code for Holberton School students.
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: Always EXIT_SUCCESS.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{ unsigned long int i;
shash_node_t *h = NULL, *new = NULL, *tmp = NULL;
char *val;

	if (!ht || !key || !value)
		return (0);
	val = strdup(value);
	i = key_index((const unsigned char *)key, ht->size);
	h = ht->shead;
	while (h)
	{
		if (strcmp(h->key, key) == 0)
		{
			free(h->value), h->value = val;
			return (1);
		} h = h->snext;
	} new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key), new->value = val;
	new->next = ht->array[i], ht->array[i] = new;
	if (!ht->shead)
	{
		new->snext = NULL, new->sprev = NULL;
		ht->shead = new, ht->stail = new;

	} else if (strcmp(ht->shead->key, new->key) > 0)
	{ new->sprev = NULL, new->snext = ht->shead;
		ht->shead->sprev = new, ht->shead = new;
	} else
	{ tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, new->key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp, new->snext = tmp->snext;
		if (!tmp->snext)
			ht->stail = new;
		else
			 tmp->snext->sprev = new;
		tmp->snext = new;
	} return (1);
}


/**
 * shash_table_get - check the code for Holberton School students.
 * @ht: hashtable
 * @key: key
 * Return: Always EXIT_SUCCESS.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *h = NULL;

	if (!ht || !key)
		return (NULL);
	h = ht->shead;
	while (h)
	{
		if (strcmp(h->key, key) == 0)
			return (h->value);

		h = h->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - check the code for Holberton School students.
 * @ht: hashtable
 * Return: Always EXIT_SUCCESS.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *h = NULL;

	if (!ht)
		return;

	h = ht->shead;
	printf("{");
	while (h)
	{
		printf("'%s': '%s'", h->key, h->value);
		h = h->snext;
		if (h)
			printf(", ");
	}

	printf("}\n");

}


/**
 * shash_table_print_rev - check the code for Holberton School students.
 * @ht: hashtable
 * Return: Always EXIT_SUCCESS.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *h = NULL;

if (!ht)
	return;

h = ht->stail;
printf("{");
while (h)
{
	printf("'%s': '%s'", h->key, h->value);
	h = h->sprev;
	if (h)
		printf(", ");
}

printf("}\n");
}



/**
 * shash_table_delete - check the code for Holberton School students.
 * @ht: hashtable
 * Return: Always EXIT_SUCCESS.
 */

void shash_table_delete(shash_table_t *ht)
{
shash_node_t *tmp = NULL, *h = NULL;
shash_table_t *t = ht;

if (!ht)
return;


h = ht->shead;


for (; h ;)
{
	tmp = h;
	h = h->snext;
	free(tmp->key);
	free(tmp->value);
	free(tmp);
}
free(t->array);
free(t);
return;
}
