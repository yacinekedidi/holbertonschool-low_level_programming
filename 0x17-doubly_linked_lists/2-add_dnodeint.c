#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: header
 * @n: number
 * Return: Always .
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (!new)
return (NULL);

new->n = n;
new->prev = NULL;
new->next = *head;

if (*head)
(*head)->prev = new;;

return (*head = new);
}
