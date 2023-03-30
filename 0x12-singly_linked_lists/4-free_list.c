#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to list
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
		tmp = head;
	}

}
