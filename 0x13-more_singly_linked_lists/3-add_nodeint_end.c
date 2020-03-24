#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check .
 * @head: list
 * @n: number
 * Return: Always .
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *tmp;

	h = malloc(sizeof(listint_t));
	if (!h)
	return (NULL);

	h->n = n;
	h->next = NULL;

	tmp = *head;
	if (!tmp)
	*head = h;
	else
	{
	while (tmp->next)
	tmp = tmp->next;

	tmp->next = h;
	}

return (h);
}
