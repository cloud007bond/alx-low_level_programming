#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table.
 * Return: the pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hashtable;

	if (size == 0)
		return (NULL);

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	hashtable->size = size;

	while (i < size)
	{
		hashtable->array[i] = NULL;
		i++;
	}

	return (hashtable);
}
