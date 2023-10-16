#include "main.h"
/**
 * print_string- function that print string
 * @ptr: arg
 * Return: length
*/
int print_string(va_list ptr)
{
	char *s;
	int i, len;

	s = va_arg(ptr, char *);
	if (str == NULL)
	{
		s = "(null)";
		len = _len(s);
		for (i = 0; i < len ; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = _len(s);
		for (i = 0; i < len ; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
