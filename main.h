#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "FunctionFormat/print_char.c"
#include <unistd.h>

int _printf(const char *format, ...);
int print_int(va_list args);
int _putchar(char c);
int print_int(va_list args);
int print_string(va_list args);

#endif
