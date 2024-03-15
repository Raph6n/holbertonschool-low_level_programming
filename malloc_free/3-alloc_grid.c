#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - fction
 * @width: var
 * @height: var
 * Return: depend
 */


int **alloc_grid(int width, int height)

{
int **grid;
int i, ii, y;

if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));

if (grid[i] == NULL)
{
for (y = 0; y < i; y++)
{
free(grid[y]);
}
free(grid);
return (NULL);
}
for (ii = 0; ii < width; ii++)
{
grid[i][ii] = 0;
}
return (grid);
}
