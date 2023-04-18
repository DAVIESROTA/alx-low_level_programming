#include "main.h"
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t lnr, lnw;
	char *buffer;

	if (filename == NULL)
		return (0);
	f = open (filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer = NULL)
	{
		close(f);
		return (0);
	}
	lnr = read(f, buffer, letters);
	close (f);
	if (lnr == -1)
	{
		free(buffer);
		return (0);
	}
	lnw = write(STDOUT_FILENO, buffer, lnr);
	free(buffer);
	if (lnr != lnw)
		return (0);
	return (lnw);
}
