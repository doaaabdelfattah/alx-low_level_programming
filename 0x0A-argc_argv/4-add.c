#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count
 * @argv: array
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
int i, j;
int count = 0;

if (argc == 1)
printf("0\n");

else
{
for (i = 1; i <= argc - 1; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error \n");
return (1);
}
}

}
count = count + atoi(argv[i]);
printf("%d\n", count);
}

return (0);
}
