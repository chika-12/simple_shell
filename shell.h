#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#define SIZE 1024
#define MAX_ARGS 1000
extern char **environ;
char *custom_memcpy(char *new_ptr, char *ptr, size_t num);
void *custom_realloc(void *ptr, size_t num);
ssize_t custom_getline(char **ptr, size_t num, FILE *stream);
void my_strtok(char *str, char *delim);
int my_execve(char *pathname, char *argv[], char *envp[]);
int _strcmp(char *s1, char *s2);
int execute_command(char *command);

#endif
