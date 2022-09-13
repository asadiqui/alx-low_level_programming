#include <stdio.h>

/**
 * main - prints the digits using int type and putchar
 */

int main(void)
{
	int i = 0;
	while (i <= 9)
	{
		putchar(i + '0'); /* convert to ASCII */
		i++;
	}
	putchar('\n');
	return (0);
}
