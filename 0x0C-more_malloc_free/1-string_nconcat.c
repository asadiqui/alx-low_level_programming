#include <stdlib.h>

/*
 * malloc_checked - concatenates two strings;
 * s1 followed by the first n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: number of s2 bytes to add
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned i, j, l1;
    char *cat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (l1 = 0; s1[l1] != '\0'; l1++);
    cat = malloc(sizeof *cat * (l1 + n + 1));
    if (cat == NULL)
        return (NULL);

    i = 0;
    while (i < l1)
    {
        cat[i] = s1[i];
        i++;
    }
    j = 0;
    while (j <= n)
    {
        cat[i] = s2[j];
        i++;
        j++;
    }
    cat[i] = '\0';
    return (cat);
}
