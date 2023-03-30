#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to a node of list_t
 * If str is NULL, print "[0] (nil)"
 * You are allowed to use printf
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	size_t count = 0, i;

	while (tmp != NULL)
	{
		i = 0;
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			while (tmp->str[i] != '\0')
				i++;
		printf("[%lu] %s\n", i, tmp->str);
		}
		count++;
		tmp = tmp->next;
	}
	return (count);
}
