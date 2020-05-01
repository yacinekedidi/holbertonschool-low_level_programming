#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 * @h: header
 * @idx: index
 * @n: number
 * Return: Always .
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h;
dlistint_t *new = NULL;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));

for (; i != idx - 1 ; i++)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}

if (!tmp->next)
return (add_dnodeint_end(h, n));


new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;

return (new);
}
