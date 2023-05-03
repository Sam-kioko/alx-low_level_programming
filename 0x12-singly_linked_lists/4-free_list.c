#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list
 * @head: pointer to head of linked list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
