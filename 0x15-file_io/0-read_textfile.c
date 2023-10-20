#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: file name
 *@letters: letters
 *Return: number of letters printed if Success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int r_value, o_value, printed;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* OPEN THE FILE */
	o_value = open(filename, O_RDONLY); /* Return File discrptor */

	/* READ THE FILE */
	r_value = read(o_value, buffer, letters);
	/* Return Number of bytes read on success*/

	/* PRINT THE FILE */
	printed = write(STDOUT_FILENO, buffer, r_value);
	/* return Nu of letters printed*/
	if (o_value == -1 || r_value == -1 || printed == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o_value); /* Close open file*/
	return (printed);
}
