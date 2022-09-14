#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122) /* ASCII vals for lowercase chars */
		return (1);
	else
		return (0);
}
