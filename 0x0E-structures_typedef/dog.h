#ifndef DOG_H
#define DOG_H
/**
 *struct dog - check the code for Holberton School students.
 *@name: pointer to a char
 *@age: number
 *@owner: string
 * Description: Always.
 */
struct dog
{char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
