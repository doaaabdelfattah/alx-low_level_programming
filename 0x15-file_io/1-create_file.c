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
 *create_file - create file
*@filename: file name
*@text_content: letters
*Return: number of letters printed if Success
*/

int create_file(const char *filename, char *text_content)
{
int o_value, w_value, len;

if (filename == NULL)
return (-1);
/* Ctreate empty file */
if (text_content == NULL)
{
o_value = open(filename, O_CREAT | O_WRONLY, 0644);
if (o_value == -1)
return (-1);
close(o_value);
return (1);
}

for (len = 0; text_content[len] != '\0'; len++)
continue;
/* OPEN THE FILE - Create new - Trunc the existing */
/* with file permission read and write */
o_value = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/* Return File discrptor */
if (o_value == -1)
return (-1);
/* READ THE FILE */
w_value = write(o_value, text_content, len);
/* Return Number of bytes read on success*/

if (w_value == -1)
{
close(o_value);
return (-1);
}
close(o_value); /* Close open file*/
return (1);
}
