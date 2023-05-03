#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the linked listint_t list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (head == NULL)
	{
		return;
	}

	node = *head;

	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}

	*head = NULL;
}
