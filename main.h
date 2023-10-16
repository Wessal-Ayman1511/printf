#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct format- struct that determine specifier
 * @specifier: specifier
 * @func: function determine specifier
 * Description: struct that help in main funct
*/
typedef struct format
{
	char *specifier;
	int (*func)();
} pair;

int print_c(va_list ptr);
int print_string(va_list ptr);
int print_mod(void);
int print_int(va_list ptr);
int print_dec(va_list ptr);
int _len(char *s);
int _len_const(const char *s);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
