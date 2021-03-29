#include "holberton.h"

/**
 * main - Copies a file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Description: This program copies the contents of a file to another file.
 *              If the destination file exists, it will truncate its contents.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	const char *orig, *dest;
	char buffer[BUFFER];
	int f_des_org, f_des_des;
	ssize_t orig_read_buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	orig = argv[1], dest = argv[2];
	f_des_org = open(orig, O_RDONLY);
	f_des_des = open(dest, O_WRONLY | O_TRUNC | O_CREAT,
			 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (f_des_org == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", orig), exit(98);

	while ((orig_read_buf = read(f_des_org, buffer, BUFFER)) > 0)
		if (orig_read_buf != write(f_des_des, buffer, orig_read_buf) ||
		    f_des_des == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest), exit(99);

	if (orig_read_buf == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", orig), exit(98);
	if (close(f_des_org) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f_des_org), exit(100);
	if (close(f_des_des) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f_des_des), exit(100);

	return (0);
}
