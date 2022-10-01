#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 1 if arguments are not numbers, 0 on success
 */
int main(int argc, char **argv)
{
	int i;
	int arg = 1;
	int sum = 0;

	if (argc == 1) /* no number passed */
	{
		printf("0\n");
		return (0);
	}

	while (arg < argc)
	{
		/* check if arguments are numbers */
		for (i = 0; argv[arg][i] != '\0'; i++)
		{
			if (!(isdigit(argv[arg][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[arg]);
		arg++;
	}
	printf("%d\n", sum);
	return (0);
}
