#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print, or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd1;
	ssize_t nread;
	ssize_t nwrite;


	if (filename == NULL)
		return (0);
	fd1 = open(filename, O_RDONLY);
	if (fd1 == -1)
		return (0);
	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
	{
		close(fd1);
		return (0);
	}
	nread = read(fd1, buff, letters);
	if (nread == -1)
	{
		free(buff);
		close(fd1);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buff, nread);
	if (nwrite == -1 || nwrite < nread)
	{
		free(buff);
		close(fd1);
		return (0);
	}
	free(buff);
	close(fd1);
	return (nwrite);
}
