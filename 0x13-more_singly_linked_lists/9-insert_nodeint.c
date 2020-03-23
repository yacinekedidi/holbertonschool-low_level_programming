#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code .
 * @head: list
 * @idx: index
 * @n: number
 * Return: Always .
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *h, *new;
unsigned int i;

	if (!*head)
	return (NULL);
	h = *head;
	for (i = 0 ; h ; i++)
	h = h->next;
	if (idx > i)
	return (NULL);
	h = *head;
	for (i = 0 ; i != (idx - 1) ; i++)
	h = h->next;
	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = h->next;
	h->next = new;

return (new);
}
