#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * * @h: pointer to a node of list_t
 * Return: the number of elements in a lnked list
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
