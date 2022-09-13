#include <stdio.h>

/**
 * main - prints combinations of digits using putchar
 */

int main(void)
{
	int i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(32); /* space */
		}
		i++;
	}
	putchar(10); /* new line */
	return (0);
}
