#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to a pointer to head of linked lists
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first_node, *node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	first_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (first_node->next == NULL)
			return (-1);
		first_node = first_node->next;
	}

	node = first_node->next;
	first_node->next = node->next;
	free(node);

	return (1);
}
