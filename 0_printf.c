#include "main.h"
/**
 * _printf- function that print
 * @format: input
 * Return: num of char
*/
int _printf(const char *format, ...)
{
	int c = 0;
	va_list  ptr;

	if (!format)
		return (-1);
	va_start(ptr, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			c++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				c++;
			}
			else if (*format == 'c')
			{
				char ch = va_arg(ptr, int);

				write(1, &ch, 1);
				c++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ptr, char*);

				write(1, str, _strlen(str));
				c += _strlen(str);
			}
		} format++;
	} va_end(ptr);
	return (c);
}
