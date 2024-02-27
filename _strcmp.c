#include "shell.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: intger
 */
int _strcmp(char *s1, char *s2)
{
	int index;
	int flags = 0;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
		{
			flags = s1[index] - s2[index];
			break;
		}
	}
	return (flags);
}
