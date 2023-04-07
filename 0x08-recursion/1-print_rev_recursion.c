#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: String input
 *
 * Retrun: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	
		print_rev_recursions(s + 1);
		_putchar(*s);
}
