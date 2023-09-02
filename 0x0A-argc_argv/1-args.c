#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * @argc: count
 * @argv: array
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
if (argv[0] != NULL)
printf("%i\n", (argc - 1));
return (0);
}
