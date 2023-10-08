#include "shell.h"
/**
 * execute_command - executes the shell commands
 *
 * @input: input string
 *
 * Return: 0
 */
void execute_ozi(char *input)
{
	pid_t nwa_pid = fork();

	if (nwa_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (nwa_pid == 0)
	{
		execlp(input, input, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
