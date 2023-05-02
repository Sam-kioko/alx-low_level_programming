#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: pointer to a linked listint_t list
 *
 * Return: the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
