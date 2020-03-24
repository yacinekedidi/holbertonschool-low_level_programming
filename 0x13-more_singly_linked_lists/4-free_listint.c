#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: list
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

		while (head)
		{
		tmp = head->next;
		free(head);
		head = tmp;
		}
}
