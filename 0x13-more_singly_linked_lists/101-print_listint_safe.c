#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - check the code f.
 * @head: list
 * Return: Always .
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *h, *tmp;
size_t i = 0;
h = head;
for (; h ; i++)
{
printf("[%p] %d\n", (void *) h, h->n);

tmp = h;
h = h->next;
	if (h >= tmp)
	{
	printf("-> [%p] %d\n", (void *) h, h->n);
	break;
	}
}

return (i);
}
