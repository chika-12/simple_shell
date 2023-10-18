#include "shell.h"
/**
 * _getline - accepts input from the keyboard
 * Return: void
 */

char *_getline(void)
{
	char *buffer = NULL;
	size_t bufferSize = 0;
	int bytesRead;

	bytesRead = getline(&buffer, &bufferSize, stdin);
	if (bytesRead == -1)
	{
	/*perror("getline");*/
		free(buffer);
		return (NULL);
	}

	if (bytesRead > 0 && buffer[bytesRead - 1] == '\n')
		buffer[bytesRead - 1] = '\0';

	return (buffer);
}
