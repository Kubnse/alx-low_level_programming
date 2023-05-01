#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 *
 * @head: pointer to head node
 *
 * @n: value to store new node
 *
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *old;
	listint_t *new;

	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (old == NULL)
		new->next = NULL;
	else
		new->next = old;

	return (new);
}
