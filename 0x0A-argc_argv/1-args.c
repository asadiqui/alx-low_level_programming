#include <stdio.h>

/**
 * main - a program that prints the number
 * of arguments passed into it
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: EXIT_SUCCESSFUL
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
