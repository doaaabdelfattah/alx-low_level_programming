#include "main.h"
/**
 *_strchr - function locates a character in a string.
 *@s: string
 *@c: character to be located
 *Return: pointer to character
 *
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i + 1);
		}
	}

return (NULL);
}
