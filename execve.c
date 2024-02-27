#include "shell.h"
/**
 * my_execve - execve example
 * @pathname: parameter
 * @argv: parameter
 * @envp: parameter
 *
 * Return: 0
 */
int my_execve(char *pathname, char *argv[], char *envp[])
{

	if (execve(pathname, argv, environ) == -1)
	{
		perror("Error");
		return (errno);
	}
	return (0);
}
