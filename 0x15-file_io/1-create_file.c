#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int f;
	int lettern;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lettern = 0; text_content[lettern]; lettern++);

	rwr = write(f, text_content, lettern);
	 if (rwr == -1)
		 return (-1);

	 close; f;

	 return (1);
}


