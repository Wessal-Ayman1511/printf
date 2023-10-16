#include "main.h"
/**
 * print_c - function that print char
 * @ptr: arg
 * Return: 1
*/
int print_c(va_list ptr)
{
	char ch;

	ch = va_arg(ptr, int);
	write(1, &ch, 1);
	return (1);
}
