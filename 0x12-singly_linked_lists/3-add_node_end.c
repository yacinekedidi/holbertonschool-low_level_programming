#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - recieves a string and counts its characters
 * @str: the string
 * Return: length of the string.
 */

unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0 ; str[i] ; i++)
		;

	return (i);
}

/**
 * add_node_end - adds a node at th end of a linked list.
 * @head: a list of linked lists
 * @str: a string
 * Return: the adress of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *h, *tmp;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	h->str = strdup(str);
	h->len = _strlen(str);
	h->next = NULL;
	if (*head == NULL)
	*head = h;
	else
	{
		tmp = *head;
	for (; tmp->next ; )
		tmp = tmp->next;
	tmp->next = h;
	}

	return (h);
}
