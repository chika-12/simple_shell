#include "shell.h"
/**
 * betty - Processing betty code
 *
 * Return: Always 0:
 */
int betty(void)
{
	int index;

	for (index = 0; index <= 10; index++)
	{
		printf("%d ", index);
	}
	putchar(10);
	return (0);
}
