#include "dog.h"

/**
 * init_dog - initialize a variable.
 * @d: pointer to struct type dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NUM)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
