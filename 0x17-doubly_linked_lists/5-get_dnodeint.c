#include "lists.h"


/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to the first node of the list.
 * @index: the index of the node, starting from 0.
 *
 * Return: nth node or NULL if it doesnt exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (ptr != NULL && i <= index)
	{
		if (i == index)
			return (ptr);
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
