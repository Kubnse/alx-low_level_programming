#include "main.h"
/**
 * _strlen_recursion - Print the lenght of a string.
 * @s: Input String
 * Return: the lenght of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
