#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 *
 * @argc: An argument counter
 * @argv: An argument value
 *
 * Return: 1 if error, 0 if success
 */
int main(int argc, char *argv[])
{
	int result;
	int i;
	char *p;
	int val;

	result = 0;
	if (argc > 1)
	{
		for (i = 1; argv[1]; i++)
		{
			val = strtol(argv[i], &p, 10);
			if (!*p)
				result += val;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
