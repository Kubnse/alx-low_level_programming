#include <stdio.h>
/**
 * main - A program that prints all arguments it receives
 *
 * @argc: An argument counter
 * @argv: An argument value
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
