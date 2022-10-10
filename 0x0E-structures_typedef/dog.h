#ifndef DOG
#define DOG
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - a strcture
 * @name: a string
 * @age: an int
 * @owner: a string
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
