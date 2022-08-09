#include "main.h"
/**
 * print_character - prints character
 * @arg: va_list parameter
 * Description: print character
 * Return: 1
 */
int print_character(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}

/**
 * print_sign - prints sign
 * @arg: va_list parameter
 * @base: base 10, 8, 16, 2 etc..
 * Description: print numbers signed
 * Return: num of characters
 */
int print_sign(va_list arg, int base)
{
	int i = 0, cont = 0;
	char *s;

	i = va_arg(arg, int);
	if (i < 0)
	{
		i = -(i);
		_putchar('-');
		cont += 1;
	}
	s = convert_to("0123456789ABCDEF", i, base);
	_puts(s);
	cont += _strlen(s);
	return (cont);
}
