#include "shell.h"
/**
 * printout - Prints to standard out put
 *
 * @oku: Ozi:
 *
 * Return: Ozi
 */
int printout(char *oku)
{
	write(STDOUT_FILENO, oku, strlen(oku));
	return (0);
}
