#include "shell.h"
/**
 * _strtok - tokenize the string
 * @str: parameter
 * @delim: parameter
 * Return: Tokenized string
 */
char *_strtok(char *str, const char *delim)
{
	char *lastToken = NULL;
	char *token = (str != NULL) ? str : lastToken;
	char *start = token;

	if (token == NULL)
		return (NULL);
	while (*token && _strchr(delim, *token))
		token++;
	if (*token == '\0')
	{
		lastToken = NULL;
		return (NULL);
	}
	while (*token && !_strchr(delim, *token))
		token++;
	if (*token)
	{
		*token = '\0';
		lastToken = token + 1;
	}
	else
	{
		lastToken = NULL;
	}
	return (start);
}

/**
 * _strchr - function
 * @str: string
 * @c: interger
 * Return: 0
 */
char *_strchr(const char *str, int c)
{
	while (*str != '\0' && *str != c)
		str++;
	if (*str == c)
		return ((char *)str);
	else
		return (NULL);
}
