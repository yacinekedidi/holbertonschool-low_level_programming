#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code .
 * @head: list
 * @index: index
 * Return: Always .
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;
	if (head)
	{
		for (i = 0 ; tmp ; i++)
		tmp = tmp->next;

		if (index > i)
		return (NULL);

		tmp = head;

		for (i = 0 ; i != index ; i++)
		tmp = tmp->next;
	}
return (tmp);
}
