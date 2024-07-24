#include "main.h"

/**
 * GetFunctionFormat - All function format for print in _printf
 *
 * 
 * Return:
*/

typedef struct {
    char format;
    int (*func)(va_list);
} format_t;

format_t formats[] =
{
    {'c', print_char},
    {'s', print_string},
    {'i', print_int},
    {'d', print_int},
    {'f', print_float},
    {'o', print_octal},
    {'x', print_hexa},
    {'X', print_caps_hexa},
    {'u', print_ui},
    {'p', print_addr},
   
    {0, NULL}
};
