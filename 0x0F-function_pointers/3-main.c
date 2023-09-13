#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main (int argc, char *argv[])

{
if (argc !=4)
return (1);
else
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
int result = (*get_op_func(argv[2]))(num1, num2);
printf("%d\n", result);
}
return (0);
}
