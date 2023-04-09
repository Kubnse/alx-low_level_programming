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
int main(int argc, char **argv)
{
	int val, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[argc]);
		result += val;
	}
	printf("%d\n", result);
	return (0);
}
