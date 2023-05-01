#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements in a linked
 * listint_t list
 *
 * @h: linked list head
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}
