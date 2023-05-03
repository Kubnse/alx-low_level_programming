#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - function that frees a listint_t list
 *
 * @h: pointer to head of linked list
 *
 * Description: This function should work for circular lists
 * Only loop through the list once
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *prev;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		prev = current;
		current = current->next;
		free(prev);

		if (prev < current)
			break;
	}
	*h = NULL;

	return (count);
}
