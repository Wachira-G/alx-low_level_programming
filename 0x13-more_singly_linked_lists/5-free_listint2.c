#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to a pointer pointing at the first node of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *tmp2 = tmp;

	while (tmp2 != NULL)
	{
		tmp = tmp->next;
		free(tmp2);
		tmp2 = tmp;
	}
	*head = NULL;
}
