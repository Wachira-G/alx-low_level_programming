#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: - pointer to the head of a linked list "listint_t list"
 *
 * Return: size of the linked list (number of nodes)
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
