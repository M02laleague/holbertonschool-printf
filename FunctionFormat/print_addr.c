#include "../main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_addr(va_list args)
{
    void *addr = va_arg(args, void *);
    unsigned long num = (unsigned long)addr;
    int count = 0;

    if (addr == NULL)
    {
        return _printf("(nil)");
    }

    // Imprimer le préfixe "0x"
    count += _printf("0x");

    // Convertir et imprimer l'adresse en hexadécimal
    count += convert_to_hex(num);

    return count;
}

int convert_to_hex(unsigned long num)
{
    char hex_chars[] = "0123456789abcdef";
    char buffer[16];
    int i, count = 0, index = 0;

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    do
    {
    /*Extraire les 4 bits les moins significatifs*/
    int digit = num & 0xF;
    
    /*Convertir en caractère hexadécimal et stocker dans le buffer*/
    buffer[index++] = hex_chars[digit];
    
    /*Mettre à jour num (décalage de 4 bits vers la droite)*/
    num >>= 4;
    } while (num > 0);

    for (i = index - 1; i >= 0; i--)
    {
    _putchar(buffer[i]);
    count++;
    }
    return (count);
}
