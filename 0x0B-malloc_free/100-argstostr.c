#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: integer
 * @av: pointer
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
int i, j, len;
char *array;

if (ac == 0 || av == NULL)
return (NULL);

array = malloc((ac * sizeof(char)) + 1);
if (array == NULL)
return (NULL);

len = 0;
for (i = 0; i < ac ; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
array[len++] = av[i][j];

array[len++] = '\n';
}

array[len++] = '\0';
return (array);
}
