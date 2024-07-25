#include "main.h"
#include "FunctionFormat/print_char.c"
#include "FunctionFormat/print_int.c"
#include "FunctionFormat/print_string.c"

/**
 * GetFunctionFormat - All function format for print in _printf
 *
 *
 * Return:
*/

typedef struct
{
	char format;
	int (*func)(va_list);
} format_t;

format_t formats[] = {
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'d', print_int},
	{0, NULL}
};
