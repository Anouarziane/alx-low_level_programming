#include "main.h"

/**
 * append_text_to_file - APpends text at End of  file.
 * @filename: A pointer to  naMe of the file.
 * @text_content: The string to aDd to  end of  file.
 *
 * Return: If  fUnction fails or the fIlename is NULL - -1.
 *         ID  file does not exist or  User lAcks wrTte permissions - -1.
 *         Or - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, a, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	a = write(d, text_content, len);

	if (d == -1 || a == -1)
		return (-1);

	close(d);

	return (1);
}
