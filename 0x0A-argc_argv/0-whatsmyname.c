#include <stdio.h>
/**
 * main - A program that prints it name
 * @argc: Argument count
 * @argv: Argument value, a string that come
 * after calling function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
