#include "lists.h"

/**
 * print_dlistint - check the code for Holberton School students.
 * @h: header
 * Return: Always .
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t i = 0;

for ( ; tmp; i++)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}

return (i);
}
