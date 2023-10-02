#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: file pointer
 * @letters: the number of letters it should read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_descriptor;
	char *file_pointer;
	ssize_t tot_read, written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	file_pointer = malloc(sizeof(char) * letters);
	if (file_pointer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	tot_read = read(file_descriptor, file_pointer, letters);

	written = write(STDOUT_FILENO, file_pointer, tot_read);

	free(file_pointer);
	close(file_descriptor);

	if (tot_read < 0 || written < 0)
	{
		return (0);
	}

	return (written);
}
