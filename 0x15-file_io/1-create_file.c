#include "main.h"
/**
 * create_file - Create or overwrite a file with the specified content.
 * @filename: The name of the file to create or overwrite.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, written, content = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (content = 0; text_content[content]; content++)
			continue;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	written = write(file, text_content, content);

	if (file == -1 || written == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
