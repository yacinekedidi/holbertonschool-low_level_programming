#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: list
 * @index: index
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *tmp;
	unsigned int i;


	if (!head)
	return (-1);
	h = *head;
	if (!h)
	return (-1);
	tmp = *head;

	if (index == 0)
	{
	*head = (*head)->next;
	free(h);
	return (1);
	}

	for (i = 0 ; i != index ; i++)
	{
		if (i == index - 1)
		tmp = h;
	h = h->next;
	if (!h)
	return (-1);
	}
	tmp->next = h->next;
	free(h);

return (1);
}
