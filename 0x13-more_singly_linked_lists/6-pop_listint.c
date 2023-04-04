#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer pointing at the first node of linked list
 *
 * Return: the head node’s data (n). or 0 if linked list is empty.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	value = tmp->n;
	free(tmp);
	return (value);
}
