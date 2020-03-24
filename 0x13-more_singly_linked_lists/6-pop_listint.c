#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: list
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (!*head)
	return (0);

		n = (*head)->n;
		h = (*head)->next;

		free(*head);
		*head = h;


return (n);
}
