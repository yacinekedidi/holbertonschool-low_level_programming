#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code.
 * @head: list
 * Return: Always .
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	h = *head;

	if (*head)
	{
		while (h)
		{
		tmp = h->next;
		free(h);
		h = tmp;
	}
	*head = NULL;
	}
}
