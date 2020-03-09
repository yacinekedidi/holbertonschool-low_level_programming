#include <stdio.h>
#include "dog.h"
/**
 * print_dog - check the code for Holberton School students.
 * @d: pointer to a struct
 * Return: Always .
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		printf("Name: %s\n", d->name);
		else
		printf("Name: (nil)");
			printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");
}
}
