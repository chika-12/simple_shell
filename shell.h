#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int printout(char *str);
void display_prompt();
int betty();
void execute_ozi(char *input);
#endif
