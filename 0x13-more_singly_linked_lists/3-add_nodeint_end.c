#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list
 * @head: pointer to a pointer to linked listint_t list
 * @n: value intger to be stored
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *end_node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = node;

	return (node);
}
