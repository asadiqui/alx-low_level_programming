#include"main.h"

/**
 * puts_half - prints half of a string
 * @str: string parameter input
 */

void puts_half(char *str)
{
	int l, i;
	/* length of str */
	for (l = 0; str[l] != '\0'; l++);
	/* define the beginning of 2nd half */
	if (l % 2)
		i = (l+1)/2;
	else
		i = l/2;
	/* print the second half */
	for (i; str[i] != '\0'; i++)
	{
		putchar(str[i]);	
	}
	putchar('\n');
}
