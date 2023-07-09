#include "hash_tables.h"

hash_node_t *create_element(const char *key, const char *value);

/**
 * hash_table_set - add an element to the hash table.
 * @ht: the hash table you want ot add or update the key/value to
 *
 * @key: is the key. cannot be an empty string.
 *
 * @value: value associated with the key.
 *   value must be duplicated and can be an empty string.
 *
 * Return: 1 if succeeded or 0 otherwise.
 *
 * In case of collision, add the new node at the beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || ht->size == 0)
		return (0);

	element = create_element(key, value);
	if (element == NULL)
		return (0);

	index = hash_djb2((const unsigned char *) key) % ht->size;
	if (ht->array[index] != NULL) /* ht array at index not empty */
	{
		hash_node_t *ptr = ht->array[index];

		while (ptr != NULL) /* traverse the chain checking of key exists */
		{
			if (strcmp(ptr->key, key) == 0) /* exits */
			{
				free(ptr->value); /*delete current value*/
				ptr->value = strdup(value);

				free(element->key); /*delete node we intended to insert */
				free(element->value);
				free(element);

				if (ptr->value == NULL)
				{
					return (0);
				}
				return (1);
			}
			ptr = ptr->next;
		}
		/* does not exist on chain*/
		element->next = ht->array[index];
		ht->array[index] = element;
		return (1);
	}
	/* ht array at index was empty (NULL) */
	element->next = NULL;
	ht->array[index] = element;
	return (1);
}


/**
 * create_element - creates a node(element)
 * @key: key to the element
 * @value: the value to the element
 * Return: the node(element) if successfully created or NULL if not.
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element = NULL;

	element = malloc(sizeof(hash_node_t)); /*create node (element) */
	if (element == NULL)
		return (NULL);

	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (NULL);
	}

	element->value = strdup(value);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (NULL);
	}

	element->next = NULL;

	return (element);
}
