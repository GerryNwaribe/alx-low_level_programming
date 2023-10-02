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
	char buffer[1024];
	ssize_t total_letters_read = 0;
	size_t letters_read;
	FILE *file_pointer = fopen(filename, "r");

	if (file_pointer == NULL)
		return (0);


	if (filename == NULL)
		return (0);

	while ((letters_read = fread(buffer, 1, sizeof(buffer), file_pointer)) > 0)
	{
		if (total_letters_read + letters_read > letters)
		{

			letters_read = letters - total_letters_read;
		}

		if (fwrite(buffer, 1, letters_read, stdout) != letters_read)
		{
			fclose(file_pointer);
			return (0);
		}

		total_letters_read += letters_read;
	}

	fclose(file_pointer);

	return (total_letters_read);
}
