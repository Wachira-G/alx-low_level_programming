#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * of a linked list
 * @head: pointer to pointer pointing at the first node of list
 * @idx:  index of the list where the new node should be added.
 *  Index starts at 0
 * @n: data to write at node inserted.
 *
 *  Return: the address of the new node, or NULL if it failed.
 *  if it is not possible to add the new node at index idx,
 *   do not add the new node and return NULL.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{/*empty list, index betond len of list, */
	listint_t *tmp, *node_b4_insert, *node_to_push;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int index = 0, len = 0;

	if (new_node == NULL)
		return (NULL);

	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < idx)
	{
		free(new_node);
		return (NULL);
	}

	if ((*head == NULL || (*head)->next == NULL) && idx == 0)
	{
		node_to_push = *head;
		*head = new_node;
	}

	tmp = *head;
	while (index < idx && tmp != NULL)
	{
		if (idx - 1 == index)
		{
			node_b4_insert = tmp;
			node_to_push = node_b4_insert->next;
			node_b4_insert->next = new_node;
		}
		tmp = tmp->next;
		index++;
	}
	new_node->next = node_to_push;
	new_node->n = n;
	return (new_node);
}
