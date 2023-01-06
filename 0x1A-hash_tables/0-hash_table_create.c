#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t;
	unsigned long int i;

	new_hash_t = malloc(sizeof(hash_table_t));
	if (new_hash_t == NULL)
		return (NULL);

	new_hash_t->size = size;
	new_hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_hash_t->array[i] = NULL;

	return (new_hash_t);
}
