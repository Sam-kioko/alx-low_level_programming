#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to a pointer to linked listint_t list
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	i = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (i);
}
