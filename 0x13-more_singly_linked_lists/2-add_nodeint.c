#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: points to the hrad of linked listint_t list
 * @n: integer to be added to linked listint_t list
 *
 * Return: he address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
