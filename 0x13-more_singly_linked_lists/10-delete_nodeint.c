#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *  of a listint_t linked list.
 * @head: pointer to pointer to head node of a linked list
 * @index:  index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i = 0, len = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	while (tmp != NULL)
	{	tmp = tmp->next;
		len++;
	}
	if (index > len)
		return (-1);

	tmp2 = *head;
	if (index == 0)
	{
		*head = tmp2->next;
	}
	else
	{
	while (i < index - 1)
	{
		tmp2 = tmp2->next;
		i++;
	}
	tmp = tmp2;
	tmp2 = tmp2->next;
	tmp->next = tmp2->next;}
	free(tmp2);
	return (1);
}
