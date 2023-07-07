#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value associated with the element,
 *  or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *ptr = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *) key) % ht->size;
	if (ht->array[index] == NULL)
		return (NULL);

	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);

		ptr = ptr->next;
	}
	return (NULL);
}
