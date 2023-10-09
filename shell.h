#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int printout(char *str);
void display_prompt(void);
int betty(void);
void execute_ozi(char *input);
extern char *args[100];
extern char **environ;
#endif
