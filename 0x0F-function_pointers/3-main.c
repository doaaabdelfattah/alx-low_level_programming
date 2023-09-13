#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - main function
* @argc: arg count
* @argv: array
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *operator;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
if (argv[2][1] != '\0')
{
printf("Error\n");
exit (99);
}
if ((strcmp(operator, "/") && num2 == 0)
|| (strcmp(operator, "%") && num2 == 0))
{
printf("Error\n");
exit(100);
}
else
{
int result = (*get_op_func(argv[2]))(num1, num2);
printf("%d\n", result);
}
return (0);
}
