#include "lists.h"

/**
 * free_dlistint - check the code for Holberton School students.
 * @head: header
 * Return: Always .
 */

void free_dlistint(dlistint_t *head)
{
  dlistint_t *tmp = NULL;

  while (head)
    {
      tmp = head->next;
      free(head);
      head = tmp;
    }

}
