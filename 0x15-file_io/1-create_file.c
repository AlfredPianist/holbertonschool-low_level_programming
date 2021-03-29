#include "holberton.h"

/**
 * create_file - Creates a new file with a given text_content.
 * @filename: Name of the file.
 * @text_content: The content to be written to the file.
 *
 * Return: 1 if success. -1 if non-existent filename, couldn't open or
 *         write the contents to the file.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	size_t buff_size;

	file_descriptor = buff_size = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename,
			       O_WRONLY | O_CREAT | O_TRUNC,
			       S_IRUSR | S_IWUSR);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[buff_size] != '\0')
			buff_size++;

		if (write(file_descriptor, text_content, buff_size) == -1)
			return (-1);
	}
	close(file_descriptor);

	return (1);
}
