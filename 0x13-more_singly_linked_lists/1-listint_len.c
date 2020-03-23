#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 * @h: list
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
	h = h->next;
	i++;
}
return (i);
}
