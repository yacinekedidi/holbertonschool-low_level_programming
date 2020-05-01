#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: header
 * @index: index
 * Return: Always .
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  dlistint_t *tmp = head;
  unsigned int i = 0;

  if (head)
    for (; tmp ; i++)
      {
	if (i == index)
	  return (tmp);
	tmp = tmp->next;
      }

  return (NULL);
}
