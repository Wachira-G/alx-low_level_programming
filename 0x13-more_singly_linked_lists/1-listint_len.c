#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: - pointer to the head of a linked list "listint_t list"
 *
 * Return: size of the linked list (number of nodes)
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
