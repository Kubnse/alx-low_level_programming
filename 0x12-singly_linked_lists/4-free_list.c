#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *vine;

	vine = head;
	while (head)
	{
		vine = head;
		head = head->next;
		free(vine->str);
		free(vine);
	}
	free(head);
}

