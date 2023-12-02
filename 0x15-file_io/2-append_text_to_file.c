#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openn, writee, lengthh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lengthh = 0; text_content[lengthh];)
			lengthh++;
	}

	openn = open(filename, O_WRONLY | O_APPEND);
	writee = write(openn, text_content, lengthh);

	if (openn == -1 || writee == -1)
		return (-1);

	close(openn);

	return (1);
}
