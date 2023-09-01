#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
{int mul = atoi(argv[1]) * atoi(argv[2]);
printf("%i", mul);
}
return (0);
}
