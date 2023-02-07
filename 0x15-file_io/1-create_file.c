#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: text content of file
 *
 * Return: 1 if successful, -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd, num_let, rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = " ";

	for (num_let = 0; text_content[num_let]; num_let++)
		;
	rwr = write(fd, text_content, num_let);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
