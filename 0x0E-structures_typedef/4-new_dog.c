#include <stdlib.h>
#include "dog.h"
/**
 *_strdup - description
 *@str: description
 *Return: description
 */
char *_strdup(char *str)
{
int i = 0, j = 0;
char *s;

if (str == NULL)
	return (NULL);
while (str[i] != '\0')
{
	i++;
}
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
	return (NULL);
while (j < i)
{
	s[j] = str[j];
	j++;
}
s[j] = '\0';
return (s);
}

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
	char *name1;
	char *owner1;

	if (owner == NULL || name == NULL)
		return (NULL);
	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);
	name1 = _strdup(name);
	owner1 = _strdup(owner);
	if (name1 == NULL || owner1 == NULL)
	{
		if (name1 == NULL)
		{
			free(x);
			return (NULL);
		}
		if (owner1 == NULL)
		{
			free(name1);
			free(x);
			return (NULL);
		}

	}
	x->name = name1;
	x->age = age;
	x->owner = owner1;
	return (x);
}
