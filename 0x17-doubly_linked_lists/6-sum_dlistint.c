#include "lists.h"

/**
 * sum_dlistint - check the code for Holberton School students.
 * @head: header
 * Return: Always .
 */

int sum_dlistint(dlistint_t *head)
{
  dlistint_t *tmp = head;
  int sum = 0;

  if (head)
    while (tmp)
      {
	sum += tmp->n;
	tmp = tmp->next;
      }

  return (sum);
}
