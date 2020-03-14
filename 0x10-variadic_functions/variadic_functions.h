#ifndef _VAR_FUN_
#define _VAR_FUN_
#include <stdarg.h>
/**
 * struct f - Struct f
 *
 * @fo: The format
 * @x: The function associated
 */
typedef struct f
{
char *fo;
void (*x)(va_list);
} f_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
