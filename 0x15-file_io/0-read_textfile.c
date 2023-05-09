#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: is the number of letters it should read and print
 * Return: 0 if the file can not be opened or read
 * if filename is NULL return 0
 * if write fails or does not write the
 * expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;

	char *str;
	ssize_t r_val,  w_val;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	str = malloc((letters) * sizeof(char));

	if (str == NULL)
		return (0);

	r_val = read(f, str, letters);
	w_val = write(STDOUT_FILENO, str, r_val);

	close(f);

	free(str);

	return ((w_val));
}
