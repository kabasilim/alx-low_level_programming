#include "main.h"

/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: A pointer to the file
 * @text_content: The string to add to the end of the file
 * Return: If the function fails or filename is NULL (-1)
 * If the file does not exist the user lacks write permissions(-1)
 * If successful (1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_des, size;
	int n = 0;

	if (!filename)
		return (-1);
	f_des = open(filename, O_CREAT | O_WRONLY | O_APPEND);

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
