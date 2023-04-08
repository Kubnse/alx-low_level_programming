#include "main.h"
int _sqrt(int prev, int root)i
/**
 * _sqrt_recursion - Function that returns natural square root
 * of a nunber.
 *
 * @n: an Input integer
 *
 * Return: The square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
