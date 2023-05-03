#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to a pointer to linked listint_t list
 * @index:  the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	return (head);
}
