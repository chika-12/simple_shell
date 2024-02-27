#include "shell.h"
/**
 * my_strtok - tokenizes a string
 * @str: parameter
 * @delim: parameter
 * Return: int
 */
void my_strtok(char *str, char *delim)
{
	char *token;

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("Token = %s\n", token);
		token = strtok(NULL, delim);
	}
}
