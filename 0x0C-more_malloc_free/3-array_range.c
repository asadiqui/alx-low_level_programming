#include <stdlib.h>

/**
 * array_range - creates an array of consecutive integers
 * @min: min number of range
 * @max: max number of range
 *
 * Return: pointer to the array, or NULL if it fails
*/
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL);
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
