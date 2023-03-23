#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - function that prints positive or negative.
 *
 * @i: the number to be checked
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive\n", i);
}
