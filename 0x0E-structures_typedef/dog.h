#ifndef DOG
#define DOG

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

#endif
