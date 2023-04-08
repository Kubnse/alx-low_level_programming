#include "main.h"
/**
 * _pow_recursion - Returns the value of x raise to
 * the power of y
 *
 * @x: base value
 * @y: power value
 *
 * Return: Power number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
