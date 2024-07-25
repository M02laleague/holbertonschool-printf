#include "main.h"
/**
 * print_int - prints integer
 * @args: argument to print
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}
	if (n / 10)
	count += print_int_recursive(n / 10);
	_putchar((n % 10) + '0');
	return (count + 1);
}
/**
 * print_int_recursive - prints int recursion
 * @n: n to print
 *
 * Return: number of characters printed
 */
int print_int_recursive(int n)
{
	int count = 0;

	if (n / 10)
		count += print_int_recursive(n / 10);
	_putchar((n % 10) + '0');
	return (count++);
}
