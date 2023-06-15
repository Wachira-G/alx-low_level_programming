#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 *   of a dlistint_t linked list.
 * @head: pointer to first node of a linked list
 *
 * Return: sum of all the data or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
