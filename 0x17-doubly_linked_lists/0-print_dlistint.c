#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list.
 * @h: pointer to head/first elements of a dlistint_t list.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		size++;
		ptr = ptr->next;
	}
	return (size);
}
