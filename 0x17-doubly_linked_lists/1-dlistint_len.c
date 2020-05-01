#include "lists.h"

/**
 * dlistint_len - check the code for Holberton School students.
 * @h: header
 * Return: Always .
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t i = 0;

for ( ; tmp; i++)
tmp = tmp->next;


return (i);
}
