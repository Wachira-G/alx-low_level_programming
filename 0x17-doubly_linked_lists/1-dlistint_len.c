#include "lists.h"

/**
 * dlistint_len - prints the elements of a dlistint_t list.
 * @h: pointer to head/first elements of a dlistint_t list.
 *
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
