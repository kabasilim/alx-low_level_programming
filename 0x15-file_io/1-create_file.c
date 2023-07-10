#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: A pointer to the file to create
 * @text_content: A pointer to a string to write to the file
 * Return: -1 if filename is NULL and (1) if successful
 */

int create_file(const char *filename, char *text_content)
{
	int f_des, size;
	int n = 0;

	if (!filename)
		return (-1);
	f_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content)
	{
		while (text_content[n])
			n++;
	}
	size = write(f_des, text_content, n);

	if (f_des == -1 || size == -1)
		return (-1);

	close(f_des);

	return (1);
}
