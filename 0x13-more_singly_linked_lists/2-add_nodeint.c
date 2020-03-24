#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code for Holberton School students.
 * @head: list
 * @n: number
 * Return: Always .
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *h;

h = malloc(sizeof(listint_t));
if (!h)
return (NULL);

h->n = n;
h->next = NULL;

if (head)
h->next = *head;

*head = h;

return (*head);
}
