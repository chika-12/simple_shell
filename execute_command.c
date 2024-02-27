#include "shell.h"
/**
 * execute_command - executes the command
 * @command: parameter
 * Return: void
 */
int execute_command(char *command)
{
	char *args[MAX_ARGS];
	int i = 0;

	args[i] = strtok(command, "\n");
	while (args[i] != NULL && i < MAX_ARGS - 1)
	{
		i++;
		args[i] = strtok(NULL, "\n");
	}
	args[i] = NULL;
	if (args[0] != NULL)
	{
		if (strcmp(args[0], "exit") == 0)
		{
			exit(0);
		}
		else
		{
			my_fork();
		}
	}
	return (0);
}
