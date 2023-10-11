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
	char *box[] = {"ls", "pwd", "ls -l", "rm", "rmdir", "cd", "rm -r"};
	int index;

	while (1)
	{
		printout("chika$ ");
		if (fgets(ihe_ntiye, sizeof(ihe_ntiye), stdin) == NULL)
		{
			break;
		}

		ihe_ntiye[strcspn(ihe_ntiye, "\n")] = '\0';

		if (ihe_ntiye[0] != '\0')
		{
			for (index = 0; box[index] != NULL; index++)
			{
				if (strcmp(box[index], ihe_ntiye) == 0)
				{
					execute_ozi(ihe_ntiye);
					break;
				}
			}

			if (box[index] == NULL)
			{
				printf("%s\n", ihe_ntiye);
			}

		}
	}
}
