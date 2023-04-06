#include "main.h"
/**
 * _puts_recursion - function that prints a string.
 *
 * @s: String
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		-puts_recursion(++s);
	}
	else
		_putchar('\n');
}
