#include "shell.h"
/**
 * my_fork - creates a new process
 * Return: void
 */
int my_fork(void)
{
	pid_t my_pid;

	my_pid = fork();

	if (my_pid == -1)
	{
		perror("fork failed");
		return (-1);
	}
	else if (my_pid == 0)
	{
		char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

		my_execve(argv[0], argv, NULL);
	}
	else
	{
		int status;

		wait(&status);

		if (WIFEXITED(status))
		{
			return (WEXITSTATUS(status));
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
