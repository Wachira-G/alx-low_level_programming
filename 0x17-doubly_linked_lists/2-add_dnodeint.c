#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlintint_t list.
 *
 * @head: pointer to pointer to the beginning of the list.
 * @n: the data to store in our node.
 *
 * Return: address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* add the data */
	new_node->prev = NULL;

	if (*head != NULL) /* list wasnt empyt */
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;

	*head = new_node; /* restablish head of list */

	return (new_node);
}
