#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_len - a function that returns the number of elements
 * @h: pointer to a structure
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0 ; h != NULL ; i++)
		h = h->next;
	return (i);
}
