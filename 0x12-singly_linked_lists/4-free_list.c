#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head:  head node
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head)
	{
	while (head)
	{
		tmp = head;
		free(head->next);
		free(head);
		head = tmp->next;
	}
	}
}
