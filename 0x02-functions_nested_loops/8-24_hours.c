#include "main.h"
/**
 *
 *
 */
void jack_bauer(void)
{
int num1, num2, num3, num4;
for (num1 = 0; num1 <= 2; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
for (num3 = 0; num3 <= 5; num3++)
{
for (num4 = 0; num4 <= 9; num4++)
{
putchar('0' + num1);
putchar('0' + num2);
putchar(58);
putchar('0' + num3);
putchar('0' + num4);
putchar('\n');
}
}
}
}
