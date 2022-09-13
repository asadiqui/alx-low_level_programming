#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 */

int main(void)
{
	char ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
