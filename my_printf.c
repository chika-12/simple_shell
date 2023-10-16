#include "shell.h"
/**
 * printout - prints output to standard out
 * @str: input to printout
 * Return: 0
 */
int specification(const char *edemede, va_list(list_of_ndeputa));
int printout(const char *edemede, ...)
{
	int ndeputa = 0;
	va_list list_of_ndeputa;

	if (edemede == NULL)
	{
		return (-1);
		perror("Error");
	}
	va_start(list_of_ndeputa, edemede);
	while(*edemede)
	{
		if (*edemede == '\0')
		{
			break;
		}
		else if (*edemede != '%')
		{
			write(1, edemede, 1);
			ndeputa++;
		}
		else
		{
			edemede++;
			ndeputa += specification(edemede, list_of_ndeputa);
		}
		edemede++;
	}
	va_end(list_of_ndeputa);
	return (ndeputa);
}
int specification(const char *edemede, va_list(list_of_ndeputa))
{
	int ndeputa = 0;
	char *str_char;
	int index_char;
	char agumagu;

	if (*edemede == 'c')
	{
		agumagu = va_arg(list_of_ndeputa, int);
		write(1, &agumagu, 1);
		ndeputa++;
	}
	else if (*edemede == 's')
	{
		str_char = va_arg(list_of_ndeputa, char*);
		index_char = 0;
		while(str_char[index_char] != '\0')
		{
			index_char++;
		}
		write(1, str_char, index_char);
		ndeputa += index_char;
	}
	else if (*edemede == 'd')
	{

	}
	return (ndeputa);
}
