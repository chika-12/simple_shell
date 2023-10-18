#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdarg.h>

int printout(const char *edemede, ...);
void display_prompt(void);
int specification(const char *edemede, va_list(list_of_ndeputa));
void execute_ozi(char *input);
void ntisasi(char *webata, char *args[]);
char *_strtok(char *str, const char *delim);
char *_strchr(const char *str, int c);
char *_getline(void);
void uzor(const char *order, const char *path, char *outcome);
extern char *args[100];
extern char **environ;
#endif
