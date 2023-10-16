#include "main.h"
/**
 * _printf- function like printf function
 * @format: input
 * Return: counter
*/
int _printf(const char *format, ...)
{
	pair x[] = {
		{"%c", print_c}, {"%s", print_string}, {"%%", print_mod},
		{"%i", print_int}, {"%d", print_dec}};
	va_list ptr;
	int i = 0, count = 0, k;

	va_start(ptr, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		k = 4;
		while (k >= 0)
		{
			if (x[k].specifier[0] == format[i] && x[k].specifier[1] == format[i + 1])
			{
				count += x[k].func(ptr);
				i += 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[i]);
		i++;
		count++;
	}
	va_end(ptr);
	return (count);
}
