#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - struct format
 * @it: specifiers
 * @fun: function
*/


typedef struct format
{
	/*take specifiers values*/
	char *it;
	/*call function _char,_string,..*/
	int (*fun)(va_list);
} EB;/* new type*/


int _putchar(char c);
int _printf(const char *format, ...);
int _char(va_list ch);
int _string(va_list st);
int _strlen(char *str);
int _percent(va_list per);


#endif
