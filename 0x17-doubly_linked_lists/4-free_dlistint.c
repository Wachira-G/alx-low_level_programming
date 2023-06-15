#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to first node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (head == NULL)
		return;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		free(ptr->prev);
	}
	free(ptr);
	head = NULL;
}
