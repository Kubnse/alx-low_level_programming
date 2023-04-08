#include "main.h"
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
	return (lp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine ssquare root
 * @i: incrementer to compare against 'c'
 * Return: square root if natural square root, or -1
 * if none found.
 */
int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
