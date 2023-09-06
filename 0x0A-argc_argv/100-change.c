#include <stdio.h>
#include <stdlib.h>
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
/**
 * main - main function
 * @argc: count
 * @argv: array
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
int num, quart, dime, nikel, doub, penny, coins;

if (argc != 2)
{
	printf("ERROR\n");
	return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
	printf("0\n");
}
else
{
	quart = num / 25;
	num = num - quart * 25;
	dime = num / 10;
	num = num - dime * 10;
	nikel = num / 5;
	num = num - nikel * 5;
	doub = num / 2;
	num = num - doub * 2;
	penny = num / 1;
	num = num - penny * 1;

	coins = quart + dime + nikel + doub + penny;
	printf("%i\n", coins);
}
return (0);
}
