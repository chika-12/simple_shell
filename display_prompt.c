#include "shell.h"
/**
 * display_prompt - Displays a prompt and wits for
 * user input
 *
 * Return: prompt
 */
void display_prompt(void)
{
	char *ihe_ntiye = NULL;
	/*size_t ihe_ntiye_size = 0;*/

	while (1)
	{
		printout("chika$ ");
		ihe_ntiye = _getline();

		if (ihe_ntiye == NULL)
		{
			if (feof(stdin))
			{
				/*printout("\n");*/
				free(ihe_ntiye);
				exit(EXIT_SUCCESS);
			}
		}
		ihe_ntiye[strcspn(ihe_ntiye, "\n")] = '\0';

		if (ihe_ntiye[0] != '\0')
		{
			execute_ozi(ihe_ntiye);
		}
		free(ihe_ntiye);
	}

}
