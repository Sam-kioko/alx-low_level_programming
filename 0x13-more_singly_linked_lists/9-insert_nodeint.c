#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to first node in a linked list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp = *head;
	unsigned int i;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			free(node);
			return (NULL);
		}
		tmp = tmp->next;
	}

	node->next = tmp->next;

	tmp->next = node;

	return (node);
}
