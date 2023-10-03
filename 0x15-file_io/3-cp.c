#include "main.h"
/**
 * main - header
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_src = open(file_from, O_RDONLY);
	int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH));
	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to");
	}
	if (fd_src == -1)
	{
		print_error(98, "Can't read from file");
	}
	if (fd_dest == -1)
		print_error(99, "Can't write to file");

	while ((bytes_read = read(fd_src, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		print_error(98, "Can't read from file");
	}
	if (close(fd_src) == -1)
	{
		print_error(100, "Can't close fd");
	}
	if (close(fd_dest) == -1)
	{
		print_error(100, "Can't close fd");
	}
	return (0);
}
