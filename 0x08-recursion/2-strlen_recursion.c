#include "main.h"
/**
 * strlen_recursion - Function that returns the lenght
 * of a string.
 *
 * @s: Input String
 *
 * Return: Always 0
 */
_strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return(1 + _strlen_recursion(s + 1));
	return 0;
}
