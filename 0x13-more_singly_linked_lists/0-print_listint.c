#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 * @h: list
 * Return: Always .
 */

size_t print_listint(const listint_t *h)

{
size_t i = 0;

while (h)
{
printf("%u\n", h->n);
h = h->next;
i++;
}
return (i);
}
