#include "shell.h"
/**
 * diplay_prompt - Displays a prompt and wits for
 * user input
 *
 * Return: prompt
 */
void display_prompt()
{
	char input[100];

	while(1)
	{
		printout("chika$ ");
		fgets(input, sizeof(input),stdin);
		input[strcspn(input, "\n")] = '\0';

		if (input[0] != '\0')
		{
			execute_ozi(input);
		}
	}
}
