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
int o_value, w_value;
if (filename == NULL)
return (-1);

/* OPEN THE FILE - Create new - Trunc the existing 
with file permission read and write */
o_value = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/* Return File discrptor */

/* READ THE FILE */
w_value = write(o_value, text_content, _strlen(text_content));
/* Return Number of bytes read on success*/

if (o_value == -1 || w_value == -1)
{
return (-1);
}
close(o_value); /* Close open file*/
return (1);
}
