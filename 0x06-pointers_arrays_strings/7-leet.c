#include "main.h"
/**
 * leet - capitalizes all words of a string.
 *@s: array of string
 *
 *Return: array with uppercase
 */
char *leet(char *s)
{
char alph[] = {'a', 'e', 'o', 't', 'l'};
char num[] = { 4, 3, 0, 7, 1};
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
if (s[i] == alph[j] || s[i] == alph[j] - 32)
{
s[i] = num[j] + '0';
}
}
return (s);
}
