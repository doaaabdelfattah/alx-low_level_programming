#include "main.h"
#include <stdlib.h>
int coun_words(char *str);

/**
 * coun_words - count words
* @str: string
* Return: integer
*/

int coun_words(char *str)
{
int words;
for (i = 0; str[i] != '\0'; i++)
if (str[i] == ' ')
words++;

return (words);

}
/**
 *strtow - splits a string into words.
* @str: string
* Return: pointer to an array of strings (words).
*/
char **strtow(char *str)
{
int i, j, q, words, total, len;
char **array;

words = coun_words(char *str);

if (str == NULL || str == "")
return (NULL);

/* calculate the length of string and umber of words*/
for (total = 0; str[total] != '\0'; total++)
;

/* allocate memory for arrays of words */
array = malloc(sizeof(char *) * words);
if (array == NULL)
return (NULL);

/* allocate memory for array elements (letters)*/

q = 0;
for (i = 0; i < total; i++)
{
/*calculate letters number*/
q = 0;
while (str[i] || str[i] != ' ')
q++;

array[i] = (char *)malloc(sizeof(char) * q);
if (array[i] == NULL)
{
for (j = 0; j <= i; j++)
{
	free(array[j]);
}

return (NULL);
}
}
len = 0;
for (i = 0; i < words ; i++)

{
for (j = 0; str[j] != '\0'; j++)
array[i][j] = str[len++];

array[i][j + 1] = '\0';
}
return (array);
}
