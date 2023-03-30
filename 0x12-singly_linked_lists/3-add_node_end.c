#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * Return: the address of the new element, or NULL if it failed
 * @head: pointer to pointer to head of list
 * @str: data to store in created node
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	new_node = malloc(sizeof(list_t));
	/* fail allocate space */
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	/* fail write str */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	/* only one node existed before */
	if (*head == NULL)
		*head = new_node;
	else
	{/* traverse from head to last node and link it to new_node */
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}
