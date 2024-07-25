#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "GetFunctionFormat.c"
#include <unistd.h>

int _printf(const char *format, ...);
int print_int(va_list args);
int _putchar(char c);
int print_addr(va_list args);
int convert_to_hex(unsigned long num);
int print_caps_hexa(va_list args);
int print_float(va_list args);
int print_hexa(va_list args);
int print_int(va_list args);
int print_octal(va_list args);
int print_string(va_list args);
int print_ui(va_list args);

#endif
