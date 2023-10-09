#include "shell.h"
void execute_ozi(char *input)
{
    pid_t nwa_pid = fork();
    extern char **environ;
    int status;

    if (nwa_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    else if (nwa_pid == 0)
    {
        char *args[2];  /* Array to hold command and NULL*/

        /* Allocate memory for the command and copy it*/
        args[0] = strdup(input);
        args[1] = NULL;

        if (execve(args[0], args, environ) == -1)
        {
            perror("execve");
            free(args[0]);  /* Free allocated memory*/
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        waitpid(nwa_pid, &status, 0);
    }
}

