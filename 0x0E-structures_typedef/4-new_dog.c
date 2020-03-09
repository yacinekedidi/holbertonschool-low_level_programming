#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code for Holberton School students.
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 * Return: Always .
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
       
	if (owner == NULL || name == NULL)
		return (NULL);
	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return(NULL);
	x->name = name;
	x->age = age;
	x->owner = owner;
return (x);
}
