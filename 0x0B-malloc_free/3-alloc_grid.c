#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: integer
 * @height: integer
 * Return: double pointer to 2d array.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **array;
if (height == 0 || width == 0)
return (NULL);

array = malloc(sizeof(int *) * height);

if (array == NULL)
return (NULL);

for (i = 0 ; i < width; i++)
array[i] = malloc(sizeof(int) * width);

if (array[i] == NULL)
return (NULL)

for (i = 0; i < height ; i++)
{
for (j = 0; j < width; j++)
array[i][j] = 0;
}
return (array);


for (i = 0; i < height; i++)
free(array[i]);

free(array);
}
