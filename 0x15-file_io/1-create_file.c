#include "main.h"

/**
 * create_file - func t create a file
 *
 * @filename: ptr to file t create
 *
 * @text_content: ptr to content of the n file
 *
 * Return: 1 on right, -1 if something wrng
 */

int create_file(const char *filename, char *text_content)
{
	int file, w_check, i = 0;

	if (filename == NULL)
		return (0);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IWUSR | S_IRUSR);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[i]; i++)
			;

		w_check = write(file, text_content, i);
		if (w_check < 0)
			return (-1);

	}

	close(file);
	return (1);
}
