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
	if (*s == '\0')

	else
	{
		_putchar(*s);
		-puts_recursion(++s);
	}
	_putchar('\n');
}
