#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table.
 * @ht: the hash table you want ot add or update the key/value to
 * @key: is the key. cannot be an empty string.
 * @value: value associated with the key.
 *   value must be duplicated and can ve an empty string.
 * Return: 1 if succeeded or 0 otherwise.
 *   In case of collision, add the new node at the beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = hash_djb2((const unsigned char *) key) % ht->size;

	/*create node for element*/
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}

	element->value = strdup(value);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (0);
	}

	element->next = NULL;

	if (ht->array[index] != NULL)
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}
	else
		ht->array[index] = element;

	return (1);
}
