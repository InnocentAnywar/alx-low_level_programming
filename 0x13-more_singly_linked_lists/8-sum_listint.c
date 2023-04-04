#include "lists.h"

/**
 * sum_listint - sum of all data of list
 * @head: pointer to head
 * Return: sum of all data(n) of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
