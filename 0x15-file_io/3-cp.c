#include "main.h"

char *creating_buffer(char *fptr);
void closing_file(int f_des);

/**
 * creating_buffer - Allocates 1024 bytes for a buffer
 * @fptr: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */

char *creating_buffer(char *fptr)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fptr);
		exit(99);
	}

	return (buffer);
}

/**
 * closing_file - Closes files
 * @f_des: The file descriptor
 */

void closing_file(int f_des)
{
	int f;

	f = close(f_des);

	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_des);
		exit(100);
	}
}

/**
 * main - program that copies the contents of a file to
 * another file
 * @argc: The number of argument in the program
 * @argv: An array of pointers
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */

int main(int argc, char *argv[])
{
	int size_r, size_w, old_file, new_file;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* argument 1=copy from old, 2=copy to new*/
	buffer = creating_buffer(argv[2]);
	/*2nd argument becomes buffer with readonly rights*/
	old_file = open(argv[1], O_RDONLY);
	size_r = read(old_file, buffer, 1024);
	new_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (old_file == -1 || size_r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		size_w = write(new_file, buffer, size_r);
		if (new_file == -1 || size_w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		size_r = read(old_file, buffer, 1024);
		new_file = open(argv[2], O_WRONLY | O_APPEND);

	} while (size_r > 0);

	free(buffer);
	closing_file(old_file);
	closing_file(new_file);

	return (0);
}
