#include "main.h"

/**
 * create_file - CreAtes the file.
 * @filename: A poinTer to the nAme of the file to now create.
 * @text_content: A pointeR to  string to write in the file.
 *
 * Return: If  functIon FAils - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fc, a, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fc, text_content, len);

	if (fc == -1 || a == -1)
		return (-1);

	close(fc);

	return (1);
}
