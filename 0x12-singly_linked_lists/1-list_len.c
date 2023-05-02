#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - number of elements in a linked list_t list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}

	return (k);
}
