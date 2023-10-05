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
	ssize_t bytes_read, bytes_written, close_to, close_from;
	char *buffer;
	char *file_from = argv[1];
	char *file_to = argv[2];

	int fd_src = open(file_from, O_RDONLY);
	int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH, 0664);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUFSIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
		exit(99);
	}
	if (fd_src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		free(buffer);
		exit(98);
	}
	if (fd_dest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
		free(buffer);
		exit(99);
	}
	do {
		bytes_read = read(fd_src, buffer, BUFSIZE) > 0;
		if (fd_src < 0 || bytes_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			free(buffer);
			exit(98);
		}
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (fd_dest < 0 || bytes_written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from);
			free(buffer);
			exit(99);
		}
	} while (bytes_read > 0);

	free(buffer);
	close_to = close(fd_dest);
	close_from = close(fd_dest);
	if (close_to < 0 || close_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %u\n",
				(close_to < 0) ? fd_dest : fd_src);
		exit(100);
	}


	return (0);
}
