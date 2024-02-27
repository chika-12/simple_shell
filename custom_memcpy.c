#include "shell.h"
/**
 * custom_memcpy - copies a memory block to another block
 * @new_ptr: new memory block
 * @ptr: old memory block
 * @num: size of new block
 * Return: new block
 */
char *custom_memcpy(char *new_ptr, char *ptr, size_t num)
{
	unsigned int index;

	for (index = 0; index < num; index++)
	{
		new_ptr[index] = ptr[index];
	}
	new_ptr[index] = '\0';
	return (new_ptr);
}
