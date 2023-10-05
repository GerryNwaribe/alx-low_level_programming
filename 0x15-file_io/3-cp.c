#include "main.h"
/**
 * main - header
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	ssize_t bytes_read = 0, bytes_written, close_to, close_from, fd_src, fd_dest;
	char *buffer;
	char *file_from;
	char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	buffer = malloc(sizeof(char) * BUFSIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fd_src = open(file_from, O_RDONLY);
	if (fd_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buffer);
		exit(98);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(buffer);
		exit(99);
	}
	do {
		bytes_read = read(fd_src, buffer, BUFSIZE);
		if (fd_src < 0 || bytes_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (fd_dest < 0 || bytes_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}
	} while (bytes_read > 0);

	free(buffer);
	close_to = close(fd_dest);
	close_from = close(fd_src);
	if (close_to < 0 || close_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n",
				(close_to < 0) ? fd_dest : fd_src);
		exit(100);
	}
	return (0);
}
