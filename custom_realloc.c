#include "shell.h"
/**
 * custom_realloc - reallocates memory
 * @ptr: old memory address
 * @num: size of memory
 * Return: void
 */
void *custom_realloc(void *ptr, size_t num)
{
	void *new_ptr = NULL;
	size_t old_size = 123;

	if (ptr == NULL)
	{
		ptr = malloc(num);
		return (ptr);
	}
	if (num == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(num);
		if (new_ptr == NULL)
			return (NULL);
		custom_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
