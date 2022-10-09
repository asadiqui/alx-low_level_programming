#include <stdlib>

/*
 * malloc_checked - allocates memory using malloc
 * @b: Size of memory needed
 *
 * Return: Pointer to address of the memory
 *         or status 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		return (98);
	return (mem);
}
