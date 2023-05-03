#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: Pointer to head
 *
 * Return: The number of nodes. Exits with 98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;
	const listint_t *old;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;
	while (current != NULL)
	{
		old = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)old, old->n);

		if (old < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
