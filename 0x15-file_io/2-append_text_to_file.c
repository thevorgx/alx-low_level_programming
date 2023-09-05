#include "main.h"~

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
}
