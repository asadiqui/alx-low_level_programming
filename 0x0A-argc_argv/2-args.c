#include <stdio.h>

/**
 * main - a program that prints
 * all arguments it receives
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: EXIT_SUCCESSFUL
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
