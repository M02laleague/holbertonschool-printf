#include "main.h"
#include "FunctionFormat/print_caps_hexa.c"
#include "FunctionFormat/print_addr.c"
#include "FunctionFormat/print_char.c"
#include "FunctionFormat/print_float.c"
#include "FunctionFormat/print_ui.c"
#include "FunctionFormat/print_int.c"
#include "FunctionFormat/print_octal.c"
#include "FunctionFormat/print_string.c"
#include "FunctionFormat/print_hexa.c"
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
