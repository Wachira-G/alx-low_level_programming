#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to pointer to the first node of the list
 * @idx: index of the list where the new node should be added (starts at 0).
 * @n: data to add to new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, **head = h;

	if (*head == NULL || idx == 0) /* insert at beginning or empty list*/
		return (new_node = add_dnodeint(h, n));
	else if ((*head)->next == NULL && idx == 1) /* 1 item list ins @ end*/
		return (new_node = add_dnodeint_end(h, n));

	else /*middle of list */
	{
		dlistint_t *ptr = *head;
		unsigned int i = 0;

		new_node = malloc(sizeof(dlistint_t));  /* alloc mem, +data */
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		while (ptr != NULL && i < idx)
		{ /* insert in middle */
			if (i == idx - 1)
			{
				new_node->next = ptr->next;
				new_node->prev = ptr;
				if (ptr->next != NULL)
					ptr->next->prev = new_node;
				ptr->next = new_node;
				return (new_node);
			}
			i++;
			ptr = ptr->next;
		}
		free(new_node);
		return (NULL);
	}
	return (NULL);
}
