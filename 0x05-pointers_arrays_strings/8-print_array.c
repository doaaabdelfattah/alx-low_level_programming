#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s : string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: the number of element
 *
 */
void print_array(int *a, int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("%i, ", a[i]);
    }
    _putchar('\n');
}