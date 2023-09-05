#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @c: integer
 * @av: pointer
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
int i, j;
char **array;

array = malloc(sizeof(char *) * ac);
if (array == NULL)
return (NULL);

for (i = 0 ; i < ac; i++)
{
array[i] = (char *)malloc(sizeof(av[i]));
if (array[i] == NULL)
{
for (j = 0; j <= i; j++)
{
free(array[j]);
}
free(array);
return (NULL);
}
}

for (i = 0; i < ac ; i++)
{
int size = sizeof(av[i]);
for (j = 0; j < size; j++)
array[i][j] = av[i][j];
}
return (array[0]);
}
