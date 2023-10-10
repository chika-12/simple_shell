#include "shell.h"
/**
 * execute_ozi - executes instructions
 * @input: string input
 * Return: 0
 */

void execute_ozi(char *input)
{
	pid_t nwa_pid = fork();
	int status;
	int i;
	char *args[100];

	if (nwa_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (nwa_pid == 0)
	{
		/* Tokenize the input to get the command and arguments*/
		char *ihe = strtok(input, " ");
		int i = 0;

		while (ihe != NULL)
		{
			args[i++] = ihe;
			ihe = strtok(NULL, " ");
		}
		args[i] = NULL;

		if (execve(args[0], args, environ) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(nwa_pid, &status, 0);
	}
	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
}

