#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code for Holberton School students.
 * @head: header
 * @index: index
 * Return: Always .
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *del = *head;
unsigned int i = 0;

if (!*head)
return (-1);

for (; i != index ; i++)
{
if (del == NULL)
return (-1);
del = del->next;
}

if (i == 0)
*head = del->next;
else
{
del->prev->next = del->next;
if (del->next)
del->next->prev = del->prev;
}

free(del);
return (1);
}
