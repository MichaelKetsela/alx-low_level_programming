#ifndef DOG
#define DOG
/**
 * dog - a strcture
 * @name: a string
 * @age: an int
 * @owner: a string
 */
struct dog
{
char *name;
float *age;
char *owner;
};
/**
 * typedef dogs - assign alternative new names for struct dog 
 */
typedef struct dog dog_t;
int _putchar(char c);
#endif
