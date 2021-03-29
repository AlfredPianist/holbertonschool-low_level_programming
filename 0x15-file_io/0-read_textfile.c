#include "holberton.h"

/**
 * read_textfile - Reads a file and prints its output to the terminal
 *                 given a set amount of characters to be printed.
 * @filename: Name of the file.
 * @letters: Amount of letters to be printed to the terminal.
 *
 * Return: The amount of letters printed. 0 if non-existent file, couldn't
 *         allocate memory for buffer, couldn't open or read the file,
 *         or write to the terminal the contents of the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	ssize_t buff_size;

	buffer = NULL;
	file_descriptor = buff_size = 0;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == EOF)
		return (0);

	buffer = malloc((letters + 1) * sizeof(*buffer));
	if (buffer == NULL)
		return (0);

	buff_size = read(file_descriptor, buffer, letters);
	if (buff_size == EOF)
		return (0);

	buffer[buff_size] = '\0';

	if (write(STDOUT_FILENO, buffer, buff_size) != buff_size)
		return (0);

	free(buffer);
	close(file_descriptor);
	return (buff_size);
}
