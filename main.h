#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "_putchar.c"
#include "print_string.c"
#include "print_int.c"
#include "print_char.c"

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_uint_recursive(unsigned int n);

#endif
