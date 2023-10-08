#include "shell.h"
/**
 * printout - Prints to standard out put
 *
 * @str: Ozi:
 *
 * Return: Ozi
 */
int printout(char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
	return (0);
}
