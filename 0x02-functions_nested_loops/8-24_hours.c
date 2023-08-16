#include "main.h"
/**
 *jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
int num1, num2, num3, num4;
for (num1 = 0; num1 <= 2; num1++)
{
for (num2 = 0; num2 <= 3; num2++)
{
for (num3 = 0; num3 <= 5; num3++)
{
for (num4 = 0; num4 <= 9; num4++)
{
_putchar('0' + num1);
_putchar('0' + num2);
_putchar(58);
_putchar('0' + num3);
_putchar('0' + num4);
_putchar('\n');
}
}
}
}
}
