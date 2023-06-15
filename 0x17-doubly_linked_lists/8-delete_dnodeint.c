#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index 'index'
 *   of a dlistint_t linked list.
 *
 * @head: pointer to pointer to start of the list.
 * @index:  deletes the node at index index of a dlistint_t linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i = 0;

	if (*head == NULL) /* empty list */
		return (-1);

	/* delete at start */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(ptr);
		return (1);
	}
	while (ptr != NULL)
	{ /* delete at mid */
		if (i == index)
		{
			if (ptr->next != NULL)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
			} /* delete and end */
			if (ptr->next == NULL)
			{
				ptr->prev->next = NULL;
			}
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1); /* index out of range */
}
