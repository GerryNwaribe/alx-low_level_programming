#include "main.h"
/**
 * append_text_to_file - Create or overwrite a file with the specified content.
 * @filename: The name of the file to create or overwrite.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{

		if (fputs(text_content, file) == EOF)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return (1);
}
