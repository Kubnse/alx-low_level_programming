#include <stdio.h>
/**
 * main - A program that prints the number of
 * argument passed into it.
 *
 * @argc: Argument counter
 * @argv: Argument value
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
