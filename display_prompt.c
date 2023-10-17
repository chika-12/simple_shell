#include "shell.h"
/**
 * display_prompt - Displays a prompt and wits for
 * user input
 *
 * Return: prompt
 */
void display_prompt(void)
{
	char ihe_ntiye[100];

	while (1)
	{
		printout("chika$ ");
		if (fgets(ihe_ntiye, sizeof(ihe_ntiye), stdin) == NULL)
		{
			if (feof(stdin))
			{
				printout("\n");
				exit(EXIT_SUCCESS);
			}

		}

		ihe_ntiye[strcspn(ihe_ntiye, "\n")] = '\0';

		if (ihe_ntiye[0] != '\0')
		{
			execute_ozi(ihe_ntiye);

		}
	}
}
