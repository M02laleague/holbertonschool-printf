#include "main.h"

/**
 * _printf - Display characters or variables like the standard printf function in language C.
 * 
 * Return:
*/

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;
    int j;

    for (int i = 0; format[i]; i++) {
        if (format[i] == '%') {
            i++;
            for (j = 0; formats[j].format != 0; j++) {
                if (format[i] == formats[j].format) {
                    count += formats[j].func(args);
                    break;
                }
            }
        } else {
            _putchar(format[i]);
            count++;
        }
    }

    va_end(args);
    return count;
}
