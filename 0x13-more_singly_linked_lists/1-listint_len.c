#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns no of elements in list
 * @h: pointer to the head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
