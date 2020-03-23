#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - check the code .
 * @head: list
 * Return: Always .
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (!head)
	return (0);

	tmp = head;

	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}

return (sum);
}
