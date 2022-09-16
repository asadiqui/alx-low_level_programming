#include <stdio.h>

/**
 * main - fizzbuzz from 1 to 100
 * Return: 0 (Always Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)

	{
		int fizz = i % 3;
		int buzz = i % 5;

		if (fizz == 0 || buzz == 0)
		{
			if (fizz == 0)
				printf("Fizz");
			if (buzz == 0)
				printf("Buzz");
			printf(" ");
		}
		else
			printf("%d ", i);
	}

	putchar('\n');
	return (0);
}
