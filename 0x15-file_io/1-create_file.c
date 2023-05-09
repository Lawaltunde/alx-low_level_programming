#include "main.h"

/**
 * create_file -function that creates a file
 * @filename: the filename.
 * @text_content: the words writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int num_letters;
	int rwr_val;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rwr_val = write(f, text_content, num_letters);

	if (rwr_val == -1)
		return (-1);

	close(f);

	return (1);
}
