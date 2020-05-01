#include "lists.h"

/**
 * add_dnodeint_end - check the code for Holberton School students.
 * @head: header
 * @n: number
 * Return: Always .
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new = malloc(sizeof(dlistint_t));
  dlistint_t *tmp = *head;

  if (!new)
    return (NULL);

  new->n = n;
  new->prev = NULL;
  new->next = NULL;

  if (*head)
    {
      while (tmp->next)
	tmp = tmp->next;

      tmp->next = new;
      new->prev = tmp;
    }
  else
    *head = new;


  return (new);
}
