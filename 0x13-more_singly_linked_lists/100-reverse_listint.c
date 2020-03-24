#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code .
 * @head: list
 * Return: Always .
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *tmp, *step;

tmp = *head;
if (!tmp)
return (NULL);

while (tmp->next)
{
step = tmp->next;
tmp->next = step->next;
step->next = *head;
*head = step;
}

return (*head);
}
