#include "main.h"

/**
 * read_textfile - func rd certain byte from a file
 *
 * @filename: pntr to file
 *
 * @letters: numb of bytes that should read
 *
 * Return: Numb of letter rd
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t count, reading;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	reading = read(file, buffer, letters);
	if (reading < 0)
		return (0);
	count = write(STDOUT_FILENO, buffer, reading);
	if (count < 0)
		return (0);

	close(file);

	return (count);
}
