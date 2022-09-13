#include <stdio.h>

/**
 * main - prints the digits of base_16
 */

int main(void)
{
	int i = 0;
	while (i <= 9)
	{
		putchar(i + '0'); /* get the ASCII0 value of 0 */
		i++;
	}

	i = 0;
	while (i < 6) /* 6 steps; from 'a' to 'f' */
	{
		putchar(i + 'a'); /* jump to 'a' for base_16 */
		i++;
	}

	putchar(10); /* new line decimal value */
	return (0);
}
