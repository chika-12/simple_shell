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
	char *args[100];
	char executable_path[256];
	const char *path = "/bin";

	if (nwa_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (nwa_pid == 0)
	{
		ntisasi(input, args);
		uzor(args[0], path, executable_path);

		if (execve(executable_path, args, environ) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(nwa_pid, &status, 0);
	}
}
/**
 * ntisasi - Tokenizes the string input
 * @webata: String input
 * @args: arguments for iteration
 * Return: void
 */
void ntisasi(char *webata, char *args[])
{
	int i = 0;

	char *ihe = strtok(webata, " ");

	while (ihe != NULL)
	{
		args[i++] = ihe;
		ihe = strtok(NULL, " ");
	}
	args[i] = NULL;
}
