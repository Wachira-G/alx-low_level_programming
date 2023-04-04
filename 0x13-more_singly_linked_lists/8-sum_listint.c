#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *    of a listint_t linked list.
 * @head: pointer to the first node of the list
 *
 * Return: sum of all data - n - of a linked list, or 0 if list is empty.
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
