#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t.
 * @head: pointer pointing at first node of listint_t list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
