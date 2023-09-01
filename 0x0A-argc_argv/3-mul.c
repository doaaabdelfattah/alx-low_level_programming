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
if (argc != 3)
{
printf("Error \n");
return (1);
}
else
{
int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);
printf("%i\n", n1 * n2);
}
return (0);
}
