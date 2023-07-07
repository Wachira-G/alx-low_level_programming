#include "hash_tables.h"

/**
 * key_index - A function that gives you the index of a key.
 * @key: key that goes through the hash funtion(djb2) to generate hash code.
 * @size: the size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 *  in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
