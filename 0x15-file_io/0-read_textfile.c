#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to POSIX stdout
 * @filename: A pointer to the file
 * @letters: The number of letters the function read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return (0)
 * if filename is NULL return (0)
 * if write fails or does not write the expected amount of bytes (0)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_des;
	ssize_t size_r, size_w;
	char *buffer;

	if (!filename)
		return (0);
	f_des = open(filename, O_RDONLY);

	if (f_des == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(f_des);
		return (0);
	}
	size_r = read(f_des, buffer, letters);
	close(f_des);

	if (size_r == -1)
	{
		free(buffer);
		return (0);
	}
	size_w = write(STDOUT_FILENO, buffer, size_r);
	free(buffer);
	if (size_r != size_w)
		return (0);

	return (size_w);
}
