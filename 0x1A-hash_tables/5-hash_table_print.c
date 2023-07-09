#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table.
 * print the key/value in the oreder that they appear
 *  in the array of hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	int is_first_pair = 1;

	if (ht == NULL || ht->size == 0)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *ptr = ht->array[i];

		if (i == 0)
			printf("{");

		if (ht->array[i] != NULL)
		{
			while (ptr != NULL)
			{
				if (!is_first_pair)
					printf(", ");

				printf("'%s': '%s'", ptr->key, ptr->value);
				is_first_pair = 0;
				ptr = ptr->next;
			}
		}

		if (i == ht->size - 1)
			printf("}\n");
	}
}
