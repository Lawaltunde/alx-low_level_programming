#include "main.h"

/**
  * read_textfile - function that reads a text file
  *  and prints it to the POSIX standard output.
  * @filename: pointer to the path
  * @letters: is the number of letters it
  *  should read and print
  * Return: the actual number of letters
  * it could read and print or zero
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, n_read, wrote;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (letters + 1));
	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	n_read = read(file, buffer, letters);
	if (n_read == -1)
		return (0);
	buffer[n_read] = '\0';
	wrote = write(STDOUT_FILENO, buffer, n_read);
	if (wrote != n_read)
		return (0);
	free(buffer);
	close(file);
	return (n_read);
}
