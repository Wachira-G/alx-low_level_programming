#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++) /* traverse the hash table's array */
	{
		hash_node_t *ptr = ht->array[i]; /* set pointer current array's index*/

		if (ht->array[i] != NULL) /* space at index not empty*/
		{

			while (ptr != NULL) /* traverse the chain*/
			{
				hash_node_t *prev = ptr; /* assist traversal to rem curr node*/

				free(ptr->key);
				ptr->key = NULL;

				free(ptr->value);
				ptr->value = NULL;

				ptr = ptr->next;
				free(prev);
				prev = NULL;
			}
			ht->array[i] = NULL; /*set space to null*/
		}
	}
	free(ht->array);
	free(ht);
}
