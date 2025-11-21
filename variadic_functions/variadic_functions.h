#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/**
 * struct ty - Structure associating the keyword with the print fucntion to use
 * @ptr: Function pointer that will point towards the printf function to use.
 * @key: Keyword feining the type to print.
 */
typedef struct ty
{
    void (*ptr)(va_list args);
    char key;
} ty_pe;

#endif
