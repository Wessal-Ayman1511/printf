#include "main.h"
/**
 * print_dec- function that print int
 * @ptr: input
 * Return: counter
*/
int print_dec(va_list ptr)
{
	int n = va_arg(ptr, int);
	int nom;
	int j = 1, exp = 1;
	int digit, last_num = n % 10;

	n = n / 10;
	nom = n;
	if (last_num < 0)
	{
		_putchar('-');
		nom = -nom;
		n = -n;
		last_num = -last_num;
		j++;
	}
	if (nom > 0)
	{
		while (nom % 10 != 0)
		{
			digit = nom / exp;
			_putchar(digit + '0');
			nom -= (digit * exp);
			exp /= 10;
			j++;
		}
	}
	_putchar(last_num + '0');
	return (j);
}
