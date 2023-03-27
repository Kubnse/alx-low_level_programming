#include "main.h"

/**
 * swap_int - A function that swaps 2 integers.
 * @a: An inout interger pointer
 * @b: An input interger pointer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int values;

	values = *a;
	*a = *b;
	*b = values;
}
