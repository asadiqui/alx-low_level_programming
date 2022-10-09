#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: Width of grid, aka # of columns
 * @height: Height of grid, aka # of rows
 *
 * Return: Pointer to 2D array, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    for (i=0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            while (i >= 0)
            {
                free(grid[i]);
                i--;
            }
            free(grid);
            return (NULL);
        }
        for (j=0; j < width; j++)
            grid[i][j] = 0;
    }
    return (grid);
}
