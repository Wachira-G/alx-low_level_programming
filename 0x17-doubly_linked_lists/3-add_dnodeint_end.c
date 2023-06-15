#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer ot pointer to the first node of the list.
 * @n: the data to store in the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tail = NULL;

	new_node = malloc(sizeof(dlistint_t));
	/* malloc fail */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* list was not empty */
	if (*head != NULL)
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		new_node->prev = tail;
		tail->next = new_node;
	}
	/* list was empty */
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
