#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * _hash_table_print - prints the hash table key and value
 * @ht: the hash table
 * @retval None
 */
void _hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		printf("[%lu]", i);
		n = 0;
		while (p)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
			n = 1;
		}
		printf("\n");
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int ret;

	ht = hash_table_create(10);
	ret = hash_table_set(ht, "Holberton", "is cool");
	printf("%d\n", ret);
	_hash_table_print(ht);
	ret = hash_table_set(ht, "Holberton", "is soooo cooool");
	printf("%d\n", ret);
	_hash_table_print(ht);
	ret = hash_table_set(ht, "Holberton", "is awesome");
	printf("%d\n", ret);
	_hash_table_print(ht);

	hash_table_set(ht, "hetairas", "collides with mentioner");
	hash_table_set(ht, "mentioner", "collides with hetairas");

	hash_table_set(ht, "heliotropes", "collides with neurospora");
	hash_table_set(ht, "neurospora", "collides with heliotropes");

	hash_table_set(ht, "depravement", "collides with serafins");
	hash_table_set(ht, "serafins", "collides with depravement");

	hash_table_set(ht, "stylist", "collides with subgenera");
	hash_table_set(ht, "subgenera", "collides with stylist");

	hash_table_set(ht, "joyful", "collides with synaphea");
	hash_table_set(ht, "synaphea", "collides with joyful");

	hash_table_set(ht, "redescribed", "collides with urites");
	hash_table_set(ht, "urites", "collides with redescribed");

	hash_table_set(ht, "dram", "collides with vivency");
	hash_table_set(ht, "vivency", "collides with dram");

	_hash_table_print(ht);
	hash_table_delete(ht);

	return (EXIT_SUCCESS);
}
