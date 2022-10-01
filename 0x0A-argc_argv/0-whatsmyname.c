#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: EXIT_SUCCESSFUL
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
