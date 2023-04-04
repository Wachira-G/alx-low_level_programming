#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node of list
 * @index: is the index of the node, starting at 0
 *
 * Return: pointer to nth node of list. if the node does not exist, return NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	/* traverse the list */
	while (i != index)
	{
		if (i < index && tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
