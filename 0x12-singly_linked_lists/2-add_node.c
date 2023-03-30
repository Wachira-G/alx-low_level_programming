#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * Return: the address of the new element, or NULL if it failed
 * @head: pointer to a pointer pointing at head of the list
 * @str: string to write as data of the new node
 * str needs to be duplicated
 * You are allowed to use strdup
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = malloc(sizeof(list_t));

	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
