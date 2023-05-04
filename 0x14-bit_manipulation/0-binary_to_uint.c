#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 *
 * @b: A pointer to string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, num2 = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * num2;
		num2 *= 2;
	}

	return (num);
}
