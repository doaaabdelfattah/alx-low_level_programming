#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _isdigit(int c);


/**
 *_isdigit - function to check for digit character
 *@c: The number to be check
 *
 * Return: 1 if the character lowercase. 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}

/**
 * main - main function
 * @argc: count
 * @argv: array
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
int i, j, n;
int count = 0;

if (argc == 1)
printf("0\n");

else
{
for (i = 1; i <= argc - 1; i++)
{
for (j = 0, n = strlen(argv[i]); j < n; j++)
{
if (!_isdigit(argv[i][j]))
{
printf("Error \n");
return (1);
}
else
continue;
}
count = count + atoi(argv[i]);
}
printf("%i\n", count);
}
}
