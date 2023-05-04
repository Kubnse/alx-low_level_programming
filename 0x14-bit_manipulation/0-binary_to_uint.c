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
	unsigned int num = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += num;
		num *= 2;
		len--;
	}
	return (result);
}
