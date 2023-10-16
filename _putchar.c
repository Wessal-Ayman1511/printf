#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the char c to stdout
 * @c: the char to print
 *
 * Return: On success 1.
 *         On error, -1 is returned, and errno is set apprantly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
