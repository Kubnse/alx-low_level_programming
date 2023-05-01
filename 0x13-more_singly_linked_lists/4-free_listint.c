#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: Head of linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *old;

	while (head != NULL)
	{
		old = head;
		head = head->next;
		free(old);
	}
}
