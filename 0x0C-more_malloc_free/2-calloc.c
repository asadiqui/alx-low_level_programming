#include <stdlib.h>

/*
 * _calloc - allocates memory for an array
 * @nmemb: number of array members
 * @size: size of each member
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
