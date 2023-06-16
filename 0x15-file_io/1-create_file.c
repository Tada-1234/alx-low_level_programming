#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - creates file
 * @filename: name of file to create
 * @text_content: the contents of the file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wriTe, len;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = (int)strlen(text_content);
		wriTe = (int)write(fd, text_content, len);
		if (wriTe == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
