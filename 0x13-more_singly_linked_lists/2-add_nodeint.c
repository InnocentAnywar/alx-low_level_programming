#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: pointer to head address
 * @n: integer of the new element
 * Return: address of new element or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
