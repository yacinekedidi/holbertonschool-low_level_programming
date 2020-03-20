#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - counts a string characters.
 * @str: string to count its characters
 * Return: the length of a string.
 */

unsigned int _strlen(const char *str)
{
	int i;

	for (i = 0 ; str[i] ; i++)
		;

	return (i);
}
/**
 * add_node - adds a new node to a list of linked lists
 *@head: list of linked lists
 *@str: string
 * Return: Adress of new head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == NULL)
	return (NULL);
	h->str = strdup(str);
	h->len = _strlen(str);
	h->next = *head;

	*head = h;

	return (h);
}
