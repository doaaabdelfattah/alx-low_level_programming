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
int i, j, len;
char *array;

if (ac == 0 || av == NULL)
return (NULL);

array = malloc(ac + 1);
if (array == NULL)
return (NULL);

// for (i = 0 ; i < ac; i++)
// {
// array[i] = (char *)malloc(sizeof(av[i]));
// if (array[i] == NULL)
// {
// for (j = 0; j <= i; j++)
// {
// free(array[j]);
// }
// free(array);
// return (NULL);
// }
// }

len = 0;
for (i = 0; i < ac ; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
array[len++] = av[i][j];

array[len++]= '\n';
}

array[len++] = '\0';
return (array);
}
