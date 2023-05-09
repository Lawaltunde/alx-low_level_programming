#include "main.h"

/**
 * append_text_to_file - function that  appends text
 * at the end of a file
 * @filename: the filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int num_letters;
	int rwr_val;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwr_val = write(f, text_content, num_letters);

		if (rwr_val == -1)
			return (-1);
	}

	close(f);

	return (1);
}
