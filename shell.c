#include "shell.h"
/**
 * main - accepts input from user
 * Return: int
 */
int main(void)
{
	char *buffer = NULL;
	size_t len = SIZE;
	size_t read;

	printf("$ ");
	while ((read = custom_getline(&buffer, len, stdin) != -1) && read != 0)
	{

		/*printf("$ ");*/
		if (strcmp(buffer, "ls") == 0 || strcmp(buffer, "pwd") == 0)
		{
			execute_command(buffer);
		}
		else
		{
			printf("%s\n", buffer);
		}
		printf("$ ");

	}
	free(buffer);
	return (0);
}
