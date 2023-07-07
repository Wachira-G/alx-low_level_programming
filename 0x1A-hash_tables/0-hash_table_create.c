#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to newly created hash table or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* allocate memory for the table*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* allocate memory for the array of the hash nodes*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* initialize array elements to null */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
