#include "main.h"
/**
 *_strcmp - function that compares two strings
 *@s1: the first pointer
 *@s2: string to be copied
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
int i, result;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
	result = s1[i] - s2[i];
	}
else
continue;
}
return (result);
}
