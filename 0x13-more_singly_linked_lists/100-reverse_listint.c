#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: pointer to head.
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	previous = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (previous != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = previous;
		previous = (*head)->next;
	}

	(*head)->next = cureent;
	return (*head);
}
