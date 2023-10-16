#include"main.h"

/**
* _len - function that returns the length of a string.
*
* @s: input
*
* Return: return( _strlen)
*
*/
int _len(char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
/**
* _len_const - function that returns the length of a string.
*
* @s: input
*
* Return: return( _strlen)
*
*/
int _len_const(const char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
