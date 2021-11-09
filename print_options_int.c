#include "main.h"

/**
 * print_int -
 * @i: argument variadic passed from the printf function.
 * Return: lenght containing the number of characters.
 */
int print_int(va_list i)
{
	int a, list, variable = 1, length = 0;
	unsigned int num;

	list = va_arg(i, int);
	if(list < 0)
	{
		_putchar('-');
		num = list * -1;
		length++;
	}
	else 
		num = list;

	while (num / variable > 9)
		variable = variable * 10;

	while (variable != 0)
	{
		a = _putchar(num / variable + '0');
		length = length + a;
		num = num % variable;
		variable = variable / 10;
	}
	return (length);
}
