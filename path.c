#include "shell.h"
/**
 * uzor - finds the path to executable files
 * @order: accepts command
 * @path: uzor
 * @outcome: result
 * Return: void
 */
void uzor(const char *order, const char *path, char *outcome)
{
	char *ptr = outcome;

	while (*path != '\0')
	{
		*ptr = *path;
		ptr++;
		path++;
	}

	*ptr = '/';
	ptr++;
	while (*order != '\0')
	{
		*ptr = *order;
		ptr++;
		order++;
	}
	*ptr = '\0';
}

