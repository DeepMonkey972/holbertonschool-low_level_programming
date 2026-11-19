#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd1;
	ssize_t nwrite;


	if (filename == NULL)
		return (-1);
	fd1 = open(filename, O_WRONLY | O_APPEND);
	if (fd1 == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	nwrite = write(fd1, text_content, i);
	if (nwrite == -1 || nwrite < i)
	{
		close(fd1);
		return (-1);
	}
	}
	close(fd1);
	return (1);
}
