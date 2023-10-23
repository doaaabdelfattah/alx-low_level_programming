#include "main.h"
/**
*append_text_to_file - create file
*@filename: file name
*@text_content: letters
*Return: 1 if success
*/

int append_text_to_file(const char *filename, char *text_content)
{
int o_value, w_value, len;

if (filename == NULL)
return (-1);

for (len = 0; text_content[len] != '\0'; len++)
continue;
/* OPEN THE FILE - Create new - Trunc the existing */
/* with file permission read and write */
o_value = open(filename, O_WRONLY | O_APPEND);

if (text_content == NULL)
{
if (o_value > 0)
{
close(o_value);
return (1);
}
if (o_value == -1)
return (-1);
}
/* READ THE FILE */
w_value = write(o_value, text_content, len);
/* Return Number of bytes read on success*/

if (o_value == -1 || w_value == -1)
return (-1);

close(o_value); /* Close open file*/
return (1);
}
