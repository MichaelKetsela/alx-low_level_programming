#include "dog.h"

/**
 * new_dog - new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *newdog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(i * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	newdog->name[k] = name[k];
	newdog->age = age;
	newdog->owner = malloc(j * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		newdog->owner[k] = owner[k];
	return (newdog);
}
