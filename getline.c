#include "shell.h"
/**
 * custom_getline - reads a line of input from a file
 * @ptr: pointer to be read from
 * @num: size of input
 * @stream: file stream
 * Return: int
 */
ssize_t custom_getline(char **ptr, size_t num, FILE *stream)
{
	size_t pos = 0;
	int index = 0;

	if (ptr == NULL || num == 0)
	{
		return (-1);
	}
	if (*ptr == NULL)
	{
		num = 128;
		*ptr = malloc(num);
		if (*ptr == NULL)
		{
			return (-1);
		}
	}
	while ((index = fgetc(stream)) != EOF && index != '\n')
	{
		(*ptr)[pos++] = (char)index;

		if (pos >= num)
		{
			num *= 2;
			*ptr = custom_realloc(*ptr, num);
			if (*ptr == NULL)
			{
				return (-1);
			}
		}
	}
	(*ptr)[pos] = '\0';
	if (index == EOF && pos == 0)
	{
		return (-1);
	}
	return (pos);
}
