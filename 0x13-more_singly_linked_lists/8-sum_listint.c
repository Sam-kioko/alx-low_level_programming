#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to a linked listint_t list
 *
 * Return:  the sum of all the data (n) of a listint_t linked list
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
